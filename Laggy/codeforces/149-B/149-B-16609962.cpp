#include <bits/stdc++.h>
using namespace std;

int _pow(int b, int p)
{
	int s = 1;
	while (p) {
		s *= b; p--;
	}
	return s;
}
int toBase10(vector<int> num, int base)
{
	int p = 0;
	int res = 0;
	for (int i = num.size()-1; i >= 0; i--)
	{
		if (num[i] >= base) return 1 << 30;
		res += num[i] * _pow(base, p);
		p++;
	}
	return res;
}
vector<int> ans;
int main()
{
	string str; cin >> str;
	int m = str.find(':');
	string mins = str.substr(m + 1), hrs = str.substr(0, m);

	vector<int> dig_1, dig_2, ans;
	bool hex = 0,bin = 1;
	for (int i = 0; i < hrs.size(); i++)
	{
		if (hrs[i] <= '9') {
			dig_1.push_back(hrs[i] - '0');
			if (hrs[i] != '0' && hrs[i] != '1') bin = 0;
		}
		else dig_1.push_back((hrs[i] - 'A') + 10), hex = 1,bin = 0;
	}
	for (int i = 0; i < mins.size(); i++)
	{
		if (mins[i] <= '9') {
			dig_2.push_back(mins[i] - '0');
			if (mins[i] != '0' && mins[i] != '1') bin = 0;
		}
		else dig_2.push_back((mins[i] - 'A') + 10), hex = 1, bin = 0;
	}

	int i;
	if (bin) i = 2;
	else if (hex) i = 11;
	else i = 3;

	for (i; i < 63; i++)
	{
		int res = toBase10(dig_1, i); int res2 = toBase10(dig_2, i);
		if (res < 24 && res2 < 60) ans.push_back(i);
	}
	if (ans.size() == 0) { printf("%d", 0); return 0; }
	else if (ans[ans.size()-1] >= 60) { printf("%d", -1); return 0; }


	for (auto x : ans)
		printf("%d ", x);
}