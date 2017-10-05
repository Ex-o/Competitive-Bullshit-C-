#include<bits/stdc++.h>
using namespace std;

bool G[26][26];
int main()
{
	int N, M; scanf("%d%d", &N,&M);
	
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			scanf("%1d", &G[i][j]);

	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			for (int k = i; k < N && !G[i][j]; k++)
			{
				for (int x = j; x < M; x++)
				{
					bool valid = G[k][x] == 0;
					for (int v = i; v <= k && valid ; v++)
					{
						for (int b = j; b <= x && valid; b++)
						{
							if (G[v][b]) valid = 0;
						}
					}
					if (valid) ans = max(ans, 2 * ((k - i + 1) + (x - j + 1)));
				}
			}
		}
	}
	printf("%d\n", ans);
}