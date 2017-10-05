#include <bits/stdc++.h>
using namespace std;

int DY[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int YR[1000];
int main()
{
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	int N; scanf("%d", &N);
	for (int i = 0; i < N; i++){
		int A, B, C, D;
		scanf("%d%d%d%d", &A, &B, &C, &D);

		int st_dat = 0;
		for (int j = 0; j < A-1; j++)
			st_dat += DY[j];
		st_dat += B;
		for (int j = st_dat - D; j < st_dat; j++)
			YR[j+100] += C;
	}
	int Ans = 0;
	for (int i = 0; i < 1000; i++) {
		Ans = max(Ans, YR[i]);
	}
	printf("%d\n", Ans);
}