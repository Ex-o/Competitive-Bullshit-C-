#include <bits/stdc++.h>
using namespace std;
int N;
set<int> GaySet;
void Illogical(int steps,long long cur, int X, int Y)
{
	if (cur <= N && !(steps > 10)) GaySet.insert(cur);
		else return;

	Illogical(steps+1,(cur * 10) + X, X, Y);
	Illogical(steps+1,(cur * 10) + Y, X, Y);
}
int main()
{
	scanf("%d", &N);
	for (int i = 1; i <= 9; i++)
		for (int j = 0; j <= 9; j++)
			Illogical(0,0, i, j);
	
	printf("%d", GaySet.size()-1);
}