#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, S; scanf("%d%d", &N, &S);

	if ((N * 9 < S) || (1 > S && N > 1)) {
		printf("-1 -1");
		return 0;
	}

	int left = S;
	string ans1;
	for (int i = 0; i < N; i++)
	{
		if ((i != 0 || N < 2) && ((N -i-1) * 9 >= left)) {
			cout << 0;
			continue;
		}
		for (int j = 1; j <= 9; j++)
		{
			if ((left - j) <= (N-i-1)*9) {
				cout << j;
				left -= j;
				break;
			}
		}
	}
	cout << " ";
	left = S;
	for (int i = 0; i < N; i++)
	{
		if (!left) {
			cout << 0;
			continue;
		}
		for (int j = 9; j >= 0; j--)
		{
			if (left >= j) {
				cout << j;
				left -= j;
				break;
			}
		}
	}
}