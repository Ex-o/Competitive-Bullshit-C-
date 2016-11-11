#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <bits/stdc++.h>
#define L(x) for(int i=0; i<x; i++)
#define L2(x) for(int j=0; j<x; j++)
#define G(x) scanf("%d",&x)
using namespace std;
vector<int> cmb;
int l, s;

int main()
{

	G(s); G(l);

	vector<int> st;
	for (int i = l; i > 0 && s; i--)
	{
		if ((i & -i) <= s) {
			st.push_back(i);
			s -= (i & -i);
		}
	}
	if (s > 0) {
		cout << -1;
		return 0;
	}

	cout << st.size() << endl;
	//cin >> s;
	for (int i = 0; i < st.size(); i++)
		printf("%d ", st[i]); //<< " ";

	//system("pause");
}