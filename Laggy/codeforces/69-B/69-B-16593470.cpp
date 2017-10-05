#include <bits/stdc++.h>
using namespace std;

int S[105][105];
int R[105];
int main()
{
	int N, M;
	scanf("%d%d", &N, &M);
	memset(S, 0, sizeof(S));

	for (int i = 0; i < M; i++)
	{
		int A, B, C, D;
		scanf("%d%d%d%d", &A, &B, &C, &D);
		R[i] = D;
		for (int j = A; j <= B; j++)
			S[i][j] = C;
	}
	int Ans = 0;
	for (int i = 1; i <= N; i++)
	{
		int mx = 1 << 30, mx_ind = -1;
		for (int j = 0; j < M; j++)
		{
			if (S[j][i] < mx && S[j][i]) {
				mx = S[j][i];
				mx_ind = j;
			}
		}
		Ans += R[mx_ind];
	}
	printf("%d\n", Ans);
}