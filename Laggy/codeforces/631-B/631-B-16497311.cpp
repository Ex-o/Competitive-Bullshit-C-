#include <bits/stdc++.h>
using namespace std;

int K[5005][5005];
bool R[5005];
bool C[5005];
int T[100001] , J[100001], X[100001];
vector< pair<int,int> > Ans;
vector<bool> type;
int main()
{
	int N, M, F;
	scanf("%d%d%d", &N, &M, &F);
	memset(K, 0, sizeof(K));

	for (int i = 0; i < F; i++){
	    cin >> T[i] >> J[i] >> X[i];
	}

    for(int i = F-1; i >= 0; i--)
    {
        if(T[i] == 1)
        {
            if(!R[ J[i] -1 ]){
                Ans.push_back(make_pair(J[i] -1 , X[i]));
                R[J[i] -1] = 1;
                type.push_back(1);
            }
        }
        else
        {
            if(!C[ J[i] -1 ]){
                Ans.push_back(make_pair(J[i] -1 , X[i]));
                C[J[i] -1] = 1;
                type.push_back(0);
            }
        }
    }

    for(int i = Ans.size() -1; i >=0; i--)
    {
        if(type[i])
        {
            for (int j = 0; j < M; j++)
				K[Ans[i].first][j] = Ans[i].second;
        }
        else
        {
            for (int j = 0; j < N; j++)
				K[j][Ans[i].first] = Ans[i].second;
        }
    }
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", K[i][j]);
		}
		printf("\n");
	}
	//system("pause");
}