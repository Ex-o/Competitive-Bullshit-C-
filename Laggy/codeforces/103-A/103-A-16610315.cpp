#include <bits/stdc++.h>
using namespace std;


int main()
{
	int N; scanf("%d", &N);
	long long ans = 0;

	for (long long i = 0; i < N; i++) {
		long long T; scanf("%I64d", &T);
		ans += (T) + ((T - 1) * i);
	}
	printf("%I64d\n ", ans);
}