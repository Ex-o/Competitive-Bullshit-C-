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
	int res = 0;
	while (X)
	{
		res += X % 10;;
		X /= 10;
	}
	return res;
}

int main()
{
	long long N;
	cin >> N;
	long long sq = sqrt(N);

	for (long long j = max(0LL,sq-150); j <= sq+150; j++)
	{
		if ((j*j) + (S(j) * j) == N) {
			cout << j << endl;
				//system("pause");
			return 0;
		}
	}
	printf("%d\n", -1);
}