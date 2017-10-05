#include<bits/stdc++.h>
using namespace std;
bool taken[100005];
int main()
{
	int N, B;
	int A[2002];

	scanf("%d%d", &N,&B);
	for (int i = 0; i < B; i++) {
		scanf("%d", &A[i]);
		taken[A[i]] = 1;
	}

	vector<int> next;

	for (int i = 1; i <= N*B; i++)
		if (!taken[i]) next.push_back(i);
	
	int ind = 0;
	for (int i = 0; i < B; i++)
	{
		printf("%d ", A[i]);
		for (int j = 1; j < N; j++)
		{
			printf("%d ", next[ind]);
			ind++;
		}
		cout << endl;
	}
}