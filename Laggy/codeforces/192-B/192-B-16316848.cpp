#include<bits/stdc++.h>
using namespace std;
pair<int, int> A[1003];
bool D[1003];
int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int H;
		scanf("%d", &H);
		A[i] = make_pair(H, i);
	}
	sort(A, A + N);

	for (int i = 0; i < N; i++)
	{
		if (D[A[i].second - 1] || D[A[i].second + 1] || A[i].second == 0 || A[i].second == N-1) {
			printf("%d", A[i].first);
			break;
		}
		D[A[i].second] = 1;
	}
	//system("pause");
}