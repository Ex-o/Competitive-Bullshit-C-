#include<bits/stdc++.h>
using namespace std;
const int MAAX = 1000005;
int Prime[MAAX] = { 0 };
int MAT[505][505];
int main()
{
	memset(Prime, 0, sizeof(Prime));
	Prime[1] = 1;
	for (int i = 2; i<MAAX; i++)
	{
		if (!Prime[i])
		{
			for (int j = i + i; j<MAAX; j += i)
				Prime[j] = 1;
		}
	}
	int N, M;
	scanf("%d%d", &N, &M);

	int sum = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			scanf("%d", &MAT[i][j]);

	int mini = 9999999;
	
	for (int i = 0; i < N; i++)
	{
		int cur = 0;
		for (int j = 0; j < M; j++)
		{
			if (Prime[MAT[i][j]]) {
				for (int x = MAT[i][j] + 1; x <= 1000001; x++) {
					if (!Prime[x]) { cur += (x - MAT[i][j]); break; }
				}
			}
		}
		mini = min(cur, mini);
	}

	for (int i = 0; i < M; i++)
	{
		int cur = 0;
		for (int j = 0; j < N; j++)
		{
			if (Prime[MAT[j][i]]) {
				for (int x = MAT[j][i] + 1; x <= 1000001; x++) {
					if (!Prime[x]) { cur += (x - MAT[j][i]); break; }
				}
			}
		}
		mini = min(cur, mini);
	}
	printf("%d\n", mini);
}