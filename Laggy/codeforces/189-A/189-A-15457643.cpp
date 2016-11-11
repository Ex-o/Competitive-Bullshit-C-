#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <bits/stdc++.h>
#define L(x) for(int i=0; i<x; i++)
using namespace std;

int D[4004];
int A[4];

int Kik(int J)
{
	int X = -23423423;
	if (!J)
		return 0;
	if (D[J] != -1) return D[J];

	if (A[1] <= J) X = max(X, Kik(J - A[1]));
	if (A[2] <= J) X = max(X, Kik(J - A[2]));
	if (A[3] <= J) X = max(X, Kik(J - A[3]));
	
	return D[J] = ++X;
}
int main()
{
	
	scanf("%d%d%d%d", A + 0, A + 1, A + 2, A + 3);
	memset(D, -1, sizeof(D));
	
	printf("%d", Kik(A[0]));
	//system("pause");
}