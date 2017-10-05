#include <bits/stdc++.h>
using namespace std;

int hentai[1000005];
int main()
{
	int N; scanf("%d", &N);

	for (int i = 0; i < N; i++) scanf("%d", &hentai[i]);

	long long  succ = 1;
	long long ans = N;
	for (int i = 1; i < N; i++)
		if (hentai[i] == hentai[i - 1])
			succ++;
		else 
			ans += succ*(succ - 1) / 2, succ = 1;
	ans += succ*(succ - 1) / 2;
	cout << ans;
}