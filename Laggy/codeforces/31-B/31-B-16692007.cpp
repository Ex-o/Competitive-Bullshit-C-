#include<bits/stdc++.h>
using namespace std;


int main()
{
	string str;
	cin >> str;

	string ans;
	bool ok = 0, ok2 = 0;
	int st = -1;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '@') ok = 1;
		if (str[i] != '@' && !ok2) ok2 = 1, st = i;

		if (ok && ok2 && str[i+1] != '@' && i+1 != str.size())
		{
			bool f = 0;
			for (int j = i + 2; j < str.size(); j++)
			{
				if (str[j] == '@') {
					ans += str.substr(st, j - 1 - st); ans += ','; f = 1;
					ok = 0, ok2 = 0, st = -1;
					if (j - 1 <= i+1) {
						printf("%s", "No solution");
						return 0;
					}
					i = j-2;
					break;
				}
			}
			if (!f) {
				ans += str.substr(st, str.size()); i = str.size();  break;
			}
		}
		else if (ok && ok2 && str[i + 1] == '@') {
			printf("%s", "No solution");
			return 0;
		}
		if (ok && !ok2) {
			printf("%s", "No solution");
			return 0;
		}
	}
	if(ans.empty()) printf("%s", "No solution"); else
		cout <<  ans << endl;
}