#include <bits/stdc++.h>
using namespace std;

string rem(string str)
{
	string ret;
	for (int i = 0; i < str.size(); i++)
		if (str[i] != '-' && str[i] != ';' && str[i] != '_')
			ret += tolower(str[i]);
	return ret;
}
int main()
{
	string x, y, z;
	cin >> x >> y >> z;
	x = rem(x), y = rem(y), z = rem(z);
	transform(x.begin(), x.end(), x.begin(), ::tolower);
	transform(y.begin(), y.end(), y.begin(), ::tolower);
	transform(z.begin(), z.end(), z.begin(), ::tolower);

	int n; cin >> n;

	while (n--)
	{
		string str; cin >> str;

		string res = rem(str);
		if (res == x + y + z || res == z + y + x || res == y + z + x || res == y + x + z || res == z + x + y || res == x + z + y) printf("%s", "ACC\n"); else printf("%s", "WA\n");
	}
}