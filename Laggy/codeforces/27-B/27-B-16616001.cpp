#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > l(1500), w(1500);
int p[1500];
int main()
{
	int N; scanf("%d", &N);
	int M = (N*(N - 1) / 2) - 1;

	for (int i = 0; i < M; i++)
	{
		int A, B; scanf("%d%d", &A, &B);
		p[A]++, p[B]++;
		w[A].push_back(B);
		l[B].push_back(A);
	}
	vector<int> both;
	for (int i = 1; i <= N; i++)
		if (p[i] == N - 2) 
			both.push_back(i);
	
	for (int i = 0; i < w[both[0]].size(); i++)
		for (auto x : l[both[1]])
			if (x == w[both[0]][i]) {
				printf("%d %d", both[0], both[1]);
				return 0;
			}
	for (int i = 0; i < w[both[1]].size(); i++)
		for (auto x : l[both[0]])
			if (x == w[both[1]][i]) {
				printf("%d %d", both[1], both[0]);
				return 0;
			}
	printf("%d %d", both[0], both[1]);
}