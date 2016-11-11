#include <bits/stdc++.h>
using namespace std;

int GROUP[109];

int main()
{

	int S, K;
	scanf("%d%d", &S, &K);
	memset(GROUP, 0, sizeof(GROUP));
	for (int i = 0; i < S; i++) {
		int T; scanf("%d", &T);
		GROUP[T]++;
	}

	int COINS = 0;
	bool LAST = 1;
	while (LAST)
	{
		LAST = 0;
		int BEF = 0;
		for (int i = 1; i < K; i++)
		{
			LAST += GROUP[i];

			if (GROUP[i] != 0) {
				if (GROUP[i] == 1 && BEF) {
					BEF = 0;
					continue;
				}
				BEF = 1;
				GROUP[i + 1] ++;
				GROUP[i]--;
			}
			else BEF = 0;
		}

		if(LAST)
			COINS++;
	}
	printf("%d", COINS);
	//	system("pause");
}