#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <bits/stdc++.h>
#define L(x) for(int i=0; i<x; i++)
#define L2(x) for(int j=0; j<x; j++)
#define G(x) scanf("%d",&x)
using namespace std;


int main()
{
	string s;
	cin >> s;

	bool N = s[0] == '-';
	int dPoint = s.find('.');
	int pInd = 0;
	if (dPoint == -1) dPoint = s.size();
	string ans = "";
	
	for (int i = dPoint -1; i >= 0; --i)
	{
		if (s[i] == '-') continue;
		ans += s[i];
		pInd++;
		if (pInd == 3 && i != N == 1 ? 1 : 0) {
			ans += ',';
			pInd = 0;
		}
	}
	reverse(ans.begin(), ans.end());
	if (dPoint == s.size()) {
		ans += ".00";
	}
	else if (dPoint == s.size() - 2) {
		ans += ".";
		ans += s[s.size() - 1];
		ans += '0';
	}
	else{
		ans += ".";
		ans += s[dPoint + 1];
		ans += s[dPoint + 2];
	}
	if (N) printf("%c", '(');
	cout << "$" << ans;
	if (N) printf("%c", ')');

	//cout << endl; system("pause");
}