#include<bits/stdc++.h>
using namespace std;
map<string, int> tot;
int main()
{
	struct pred
	{
		bool operator()(const pair<int, string> &left, const pair<int, string> &right)
		{
			if (left.first == right.first)
			{
				return left.second > right.second;
			}
			return left.first < right.first;
		}
	};

	string myName;
	int N;
	cin >> myName >> N;
	cin.ignore();
	set<string> mySet;
	for (int i = 0; i<N; i++)
	{
		string str, name1, name2;
		getline(cin, str);
		char skip;
		int ind = 0;
		int sco = 0;
		for (int j = 0; j<str.size(); j++)
		{
			if (str[j] == ' ') {
				skip = str[j + 1];
				if (skip == 'p') ind = j + 11, sco = 15;
				else if (skip == 'c') ind = j + 14, sco = 10;
				else if (skip == 'l') ind = j + 7, sco = 5;
				break;
			}
			name1 += str[j];
		}

		for (int j = ind; j<str.size(); j++)
		{
			if (str[j] == '\'') break;
			name2 += str[j];
		}
		if(name1 != myName) mySet.insert(name1);
		if (name2 != myName)mySet.insert(name2);

		if (name1 == myName) tot[name2] += sco;
		else if (name2 == myName) tot[name1] += sco;
	}
	vector<pair<int, string>> ans;
	for (auto x : mySet)
		ans.push_back(make_pair(tot[x], x));
	
	sort(ans.begin(), ans.end(),pred());

	for (int i = ans.size() - 1; i >= 0; i--)
		cout << ans[i].second << endl;
}