#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <bits/stdc++.h>
#define L(x) for(int i=0; i<x; i++)
using namespace std;


int main()
{
	int N, K;
	int Ans = 0;
	scanf("%d%d", &N, &K);
	while (N--)
	{
		int T,B=0; 
		bool f = 1;
		scanf("%d", &T);
		while (T != 0 && f)
		{
			if (T % 10 == 4 || T % 10 == 7)
				++B;

			if (B > K)
				f = !f;
			T /= 10;
		}
		if (f)
			++Ans;
	}
	printf("%d", Ans);
	//system("pause");
}