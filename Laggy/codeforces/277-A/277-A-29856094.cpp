#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> langs(105);
vector<vector<int>> edges(105);
int v[105];
int f[105];
int flag = 0;
bool zero[105];
void dfs(int x) {
    if(v[x]) return;
    v[x] = 1;
    f[x] = flag;
    for(int i = 0; i < edges[x].size(); i++){
        dfs(edges[x][i]);
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    memset(f, -1, sizeof(f));
    int z = 0;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        if(!t){
            zero[i] = 1;
            ++z;
        }
        for(int j = 0; j < t; j++){
            int l; cin >> l;
            langs[l].push_back(i);
        }
    }

    for(int i = 1; i <= m; i++){
        for(int j = 0; j < max(0, (int)langs[i].size() - 1); j++){
            edges[langs[i][j]].push_back(langs[i][j+1]);
            edges[langs[i][j+1]].push_back(langs[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        if(f[i] == -1 && !zero[i]){
            flag++;
            dfs(i);
        }
    }
    cout << max(0,flag - 1) + z;
}