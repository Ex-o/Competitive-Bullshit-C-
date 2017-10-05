#include "bits/stdc++.h"
using namespace std;
vector<int> sorted, original;
vector<vector<int>> ans;
bool v[100005];
map<int , int> pos;
int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        original.push_back(t);
    }
    vector<int> tmp = original;
    sort(tmp.begin(), tmp.end());
    sorted = tmp;

    for(int i = 0; i < n; i++)
        pos[sorted[i]] = i;

    for(int i = 0; i < n; i++){
        if(v[i]) continue;
        bool f = 0;
        int to = pos[original[i]];
        ans.push_back(vector<int>{i});
        v[i] = 1;
        while(i != to){
            if(!v[to]) ans[ans.size() - 1].push_back(to);
            v[to] = 1;
            to = pos[original[to]];
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].size() << " ";
        for(int j = 0; j < ans[i].size(); j++) cout << ans[i][j] + 1 << " ";
        cout << endl;
    }
}