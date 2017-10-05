#include<bits/stdc++.h>
using namespace std;

int N, M;
string st[25];
map<pair<string, string>, int> adj;
vector<string> final_ans;
void plz(vector<string> cur, int ind)
{
	if (ind == N) {
		if (cur.size() > final_ans.size())
			final_ans = cur;
		return;
	}

	bool valid = 1;
	for (int i = 0; i < cur.size(); i++) 
		if (adj[make_pair(st[ind], cur[i])]) valid = false;
	
	plz(cur, ind + 1);
	if (valid) {
		cur.push_back(st[ind]);
		plz(cur, ind + 1);
	}
}
int main()
{
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++) cin >> st[i];

	for (int i = 0; i < M; i++) {
		string a, b; cin >> a >> b;
		adj[make_pair(a, b)] = 1;
		adj[make_pair(b, a)] = 1;
	}

	vector<string> init;
	plz(init, 0);
	sort(final_ans.begin(), final_ans.end());

	printf("%d\n", final_ans.size());
	for (auto x : final_ans)
		cout << x << endl;
}