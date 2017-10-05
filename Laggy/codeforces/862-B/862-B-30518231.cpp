#include "bits/stdc++.h"
using namespace std;
set<int>_1, _2;
vector<vector<int>> con(100005);
bool v[100005];
void dfs(int node, int flag) {
    if(v[node]) return;
    v[node] = 1;
    if(flag)
        _1.insert(node);
    else _2.insert(node);
    for(int i = 0; i < con[node].size(); i++){
        dfs(con[node][i], !flag);
    }
}
int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        con[u].push_back(v);
        con[v].push_back(u);
    }
    dfs(1, 1);

    cout << (long long)_1.size() * (long long)_2.size() - (n - 1LL);
}