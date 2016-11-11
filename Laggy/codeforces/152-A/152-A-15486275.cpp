#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <bits/stdc++.h>
#define L(x) for(int i=0; i<x; i++)
#define L2(x) for(int j=0; j<x; j++)
#define G(x) scanf("%d",&x)
using namespace std;


int main()
{
	int N, X;
	G(N); G(X);
	
	char D[101][101];
	char M[101];
	set<int> Ans;

	memset(M, '0', 101);
	L(N) {
		scanf("%s", &D[i]);
		L2(X) 
			M[j] = max(M[j], D[i][j]);
	}

	L(N){
		L2(X) {
			if (D[i][j] == M[j])
				Ans.insert(i);
		}
	}
	printf("%d\n", Ans.size());
	//system("pause");
}