#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <bits/stdc++.h>
#define L(x) for(int i=0; i<x; i++)
using namespace std;

int D[100005],
	P[100005];

int main()
{
	int S = 1;
	long long T = 0;
	int N, X;
	scanf("%d %d", &N, &X);

	L(N)
		scanf("%d %d", &D[i], &P[i]);

	L(N){
	
			int F = D[i] - S;
			int K = (F / X) * X;
			T += F - K + P[i] - D[i] +1;
			S = P[i] + 1;
	}
	cout << T << endl;
}