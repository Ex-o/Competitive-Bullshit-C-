#include <bits/stdc++.h>
using namespace std;

int Arr[105];
int main()
{
	int N, D, L;
	scanf("%d%d%d", &N, &D, &L);
	
	int maxn = abs(L);
	int ps = 0, ng = 0;
	for (int i = 0; i < N; i++) {
		if (i & 1) Arr[i] = 1, ng++;
		else Arr[i] = maxn, ps++;
	}
	int cur = (ps * L) - ng;
	
	if ((ps * L) - ng < D || ps - (maxn * ng) > D) {
		printf("%d", -1);
		return 0;
	}

	int ind = 0;
	while (cur != D)
	{
		if (ind == N) ind = 0;
		if (ind & 1) {
			if (Arr[ind] != maxn && cur > D) {
				Arr[ind]++;
				cur--;
			}
		}
		else {
			if (Arr[ind] != 1 && cur > D) {
				Arr[ind]--;
				cur--;
			}
		}
		ind++;
	}

	for (int i = 0; i < N; i++)
		printf("%d ", Arr[i]);
}