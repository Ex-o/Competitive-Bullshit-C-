#include<bits/stdc++.h>
using namespace std;

map<int, pair<int, int> > T;

int main()
{
	int N, M, S, F;
	scanf("%d%d%d%d", &N, &M, &S, &F);
	
	for (int i = 0; i < M; i++)
	{
		int A, B, C;
		cin >> A >> B >> C;
		T[A].first = B;
		T[A].second = C;
	}

	int step = 1;
	int cur = S;
	while (true)
	{
		if (cur == F) break;
		int nxt = F > S ? cur + 1 : cur - 1;

		if ((cur >= T[step].first &&  T[step].second >= cur) || (nxt >= T[step].first && T[step].second >= nxt)) {
			printf("%c", 'X');
			nxt = cur;
		}
		else
			printf("%c", F > S ? 'R' : 'L');

		step++;
		cur = nxt;
	}
	//system("pause");
}