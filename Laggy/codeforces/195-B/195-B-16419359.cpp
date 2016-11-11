#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K;
	scanf("%d%d", &N, &K);
	
	int M = (K & 1 ? (K + 1) / 2 : K / 2);

	int L = M-1;
	int R = M+1;
	if (K == 1) M = 1,R = 1, L = 1;
	bool F = 0;
	printf("%d\n", M);
	N--;
	while (N--)
	{
		if (L && abs((K+1)/2.0 - L) <= abs((K+1)/2.0 - R)) {
			printf("%d\n", L);
			L--;
		}
		else {
			printf("%d\n", R);
			R++;
		}
		if (L == 0 && R == K+1 && N != 0) {
			L = M - 1, R = M + 1;
			if (K == 1) M = 1, R = 1, L = 1;
			printf("%d\n", M);
			--N;
		}
	}
	//system("pause");
}