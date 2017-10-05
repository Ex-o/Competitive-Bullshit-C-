#include "bits/stdc++.h"
using namespace std;
typedef long double lld;
typedef long long ll;

vector<pair<int, int>> q;
int main() {
    int n, m;
    cin >> n >> m;

    int a, b;
    cin >> a >> b;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        q.push_back({x * a + y * b, i});
    }
    sort(q.begin(), q.end());
    vector<int> ans;
    for(int i = 0; i < q.size(); i++){
        if(q[i].first <= m){
            ans.push_back(q[i].second + 1);
            m -= q[i].first;
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}