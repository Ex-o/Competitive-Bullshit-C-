#include <bits/stdc++.h>
using namespace std;

int A[1005], B[1005];

int main()
{
	int N; scanf("%d", &N);

	for (int i = 0; i < N; i++) scanf("%d", &A[i]);
	for (int i = 0; i < N; i++) scanf("%d", &B[i]);

	long long mxn = 0;
	for (int i = 0; i < N; i++)
	{
		long long sumi = 0, sumj = 0;
		for (int j = i; j < N; j++)
		{
			sumi |= A[j];
			sumj |= B[j];
		}
		mxn = max(sumi + sumj, mxn);
	}
	printf("%d\n", mxn);
	//system("pause");
}