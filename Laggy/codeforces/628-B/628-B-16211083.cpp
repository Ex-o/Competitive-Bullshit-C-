#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <bits/stdc++.h>
#define L(x) for(int i=0; i<x; i++)
#define L2(x) for(int j=0; j<x; j++)
#define G(x) scanf("%d",&x)
using namespace std;

//int dp[3000005][5];

int main()
{
	string str; cin >> str;
	long long ans = 0;
	for (int i = str.size() - 1; i >= 0; i--)
	{
		if ((str[i] - '0') % 4 == 0) ans++;
		if (i > 0) {
			string sub = "";
			sub += str[i - 1]; sub += str[i];
			int nu = stoi(sub);
			if (nu % 4 == 0)
				ans += (i-2)+2;
		}
	}
	cout << ans;
	//cout << endl; system("pause");
}