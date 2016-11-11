#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <bits/stdc++.h>
#define L(x) for(int i=0; i<x; i++)
#define L2(x) for(int j=0; j<x; j++)
#define G(x) scanf("%d",&x)
using namespace std;

int S(int X)
{
	int res = 1;
	while (res <= X)
		res *= 2;

	//cout << res/2 << endl;
	return res/2;
}

int main()
{
	int N, B, P;
	scanf("%d%d%d", &N, &B, &P);

	int M = N;
	int K = S(M);

	int Ans1 = 0, Ans2 = P*N;
	while (true)
	{
		//cout << M << " " << K << endl;
		if (M == 1) break;
		M -= K;
		Ans1 += (K / 2);
		Ans1 += B*K;
		M += (K / 2);
		K = S(M);
	}
	cout << Ans1 << " " << Ans2;
	//cout << endl; system("pause");
}