#include <bits/stdc++.h>
using namespace std;

int R[1005];
int F[1005];
int main()
{
	int L, X;
	scanf("%d%d", &L, &X);

	for (int i = 0; i < L; i++)
	{
		int A, B; scanf("%d%d", &A, &B);
		F[i] = min(A, B);
		R[i] = max(A, B);
	}
	

	int ans = 5555;
	for (int i = 0; i < 1002; i++)
	{
		int overlap = 1;
		for (int j = 0; j < L; j++)
			if (!(i >= F[j] && i <= R[j])) {
				overlap = 0;
				break;
			}
		if (overlap && abs(X - i) < ans) {
			ans = abs(X - i);
		}
	}
	printf("%d\n", ans != 5555 ? ans : -1);
}