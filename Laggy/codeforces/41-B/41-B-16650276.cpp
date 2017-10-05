#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N, B;
	int A[2002];

	scanf("%d%d", &N,&B);
	for (int i = 0; i < N; i++) scanf("%d", &A[i]);

	int s = 0;
	int mx = B;
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			s = B;
			if (A[i] <= A[j] && A[i] <= B) {
				s -= (B / A[i]) * A[i];
				s += (B / A[i]) * A[j];
			}
			mx = max(mx, s);
		}
	}
	cout << mx << endl;
}