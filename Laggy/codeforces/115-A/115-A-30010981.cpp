#include "bits/stdc++.h"
using namespace std;
vector<int> roots;
vector<vector<int>> emp(2002);
int ans = 0;
void dfs(int x, int l)
{
    for(int i = 0; i < emp[x].size(); i++)
        dfs(emp[x][i], l + 1);

    ans = max(ans, l);
}
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int t; scanf("%d", &t);
        if(t == -1) roots.push_back(i + 1);
        else emp[t].push_back(i + 1);
    }

    for(int i = 0; i < roots.size(); i++)
        dfs(roots[i], 1);

    cout << ans;
}