#include <bits/stdc++.h>
using namespace std;
char G[51][51];
int N, M;
vector<pair<int, int>> b;
bool B[2500][2500];
bool reach(int x, int y, int ind)
{
	for (int i = 0; i < b.size(); i++)
	{
		if (x == b[i].first && y == b[i].second) continue;
		if (B[ind][i] || B[i][ind]) continue;
		B[ind][i] = 1;

		if (x == b[i].first) {
			for (int j = min(y, b[i].second); j < max(y, b[i].second); j++)
				if (G[x][j] == 'W')  return false;
		}
		else if (y == b[i].second) {
			for (int j = min(x, b[i].first); j < max(x, b[i].first); j++)
				if (G[j][y] == 'W')  return false;
		}
		else {
			bool path = 1, path2 = 1, path3 = 1, path4 = 1;
			for (int j = min(x, b[i].first); j <= max(x, b[i].first); j++)
				if (G[j][y] == 'W') path = 0;

			for (int j = min(y, b[i].second); j <= max(y, b[i].second) && path; j++)
				if (G[b[i].first][j] == 'W') path2 = 0;

			for (int j = min(y, b[i].second); j <= max(y, b[i].second); j++)
				if (G[x][j] == 'W') path3 = 0;
			for (int j = min(x, b[i].first); j <= max(x, b[i].first) && path3; j++)
				if (G[j][b[i].second] == 'W') path4 = 0;

			if (!((path && path2) || (path3 && path4))) return false;
		}
	}
	return true;
}
int main()
{
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			scanf(" %c", &G[i][j]);
			if (G[i][j] == 'B') b.push_back(make_pair(i, j));
		}

	for (int i = 0; i < b.size(); i++)
	{
		if (!reach(b[i].first, b[i].second,i)) {
			printf("%s", "NO\n");
			return 0;
		}
	}
	printf("%s", "YES\n");
}