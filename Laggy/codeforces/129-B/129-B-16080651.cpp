#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <bits/stdc++.h>
#define L(x) for(int i=0; i<x; i++)
#define L2(x) for(int j=0; j<x; j++)
#define G(x) scanf("%d",&x)
using namespace std;

bool Adj[1005][1005];
int Cnt[1005];
void Edge(int A, int B)
{
	Adj[A][B] = 1; Adj[B][A] = 1;
	Cnt[A]++, Cnt[B]++;
}
int main()
{
	memset(Adj, 0, sizeof(Adj));
	memset(Cnt, 0, sizeof(Cnt));
	int N, M;
	G(N); G(M);
	L(M){
		int A, B;
		G(A); G(B);
		Edge(A, B);
	}
	int Ans = 0;
	bool cont = 1;
	while (cont)
	{
		cont = 0;
		vector<int> mf;
		mf.empty();
		for (int i = 1; i <= N; i++) {
			if (Cnt[i] == 1) {
				cont = 1;
				Cnt[i] = 0;


				for (int j = 1; j <= N; j++)
					if (Adj[i][j]) {
						Adj[j][i] = 0;
						mf.push_back(j);
						break;
					}
			}
		}

		if (cont) {
			Ans++;
			L(mf.size())
				Cnt[mf[i]]--;
		}
	}
	printf("%d", Ans);
	//system("pause");
}