#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define GetII(x,y) scanf("%d%d",&x,&y);
#define GetIII(x,y,z) scanf("%d%d%d",&x,&y,&z);
#define GetS(x) scanf("%s",&x);
#define FOR(j) for(int i=2; i<j; ++i)
#define PB push_back
#define RemoveAll(x,z) x.erase(remove(x.begin(),x.end(),z),x.end());
#define IOS ios_base::sync_with_stdio(false);
int main() 
{
	int N;
	scanf("%d", &N);
	char G[101][101];
	int Ans = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> G[i][j];
		
	for (int i = 0; i < N; i++) {
		int tot = 0;
		for (int j = 0; j < N; j++) {
			if (G[i][j] == 'C')
				tot++;
		}
		if (tot >= 2) {
			Ans += (tot*(tot - 1)) / 2;
		}
	}

	for (int i = 0; i < N; i++)
	{
		int tot = 0;
		for (int j = 0; j < N; j++)
		{
			if (G[j][i] == 'C')
				tot++;
		}
		if(tot >=2)
			Ans += (tot*(tot - 1)) / 2;
	}

	cout << Ans;
	//system("pause");
}