#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N, K; scanf("%d%d", &N,&K);
	for (int i = N; i > N - K; i--) printf("%d ", i);
	for (int i = 1; i <= N - K; i++) printf("%d ", i);
}