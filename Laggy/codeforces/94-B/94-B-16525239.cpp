#include <bits/stdc++.h>
using namespace std;

int Adj[10][10];


int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int T, F;
		scanf("%d%d", &T, &F);

		Adj[T][F] = 1, Adj[F][T] = 1;
	}

	for (int i = 1; i < 6; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			bool paired = 0;
			if (Adj[i][j]) paired = 1;

			for (int x = 1; x < 6; x++)
			{
				if (x == i || x == j) continue;
				if ((paired && Adj[x][i] && Adj[x][j]) || (!paired && !Adj[x][i] && !Adj[x][j])) {
					printf("%s", "WIN");
					return 0;
				}
			}
		}
	}
	printf("%s", "FAIL");
	//system("pause");
}