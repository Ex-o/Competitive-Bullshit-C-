//THIS IS GONNA TLE :D
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int a[3000003];
int t[3000003];
vector<pair<int, int>> vrs;
set<int> ts;
int main() {
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> t[i + 1];
        vrs.push_back({t[i + 1], i + 1});
        ts.insert(i + 1 + k);
    }

    sort(vrs.rbegin(), vrs.rend());

    for(int i = 0; i < n; i++){
        set<int>::iterator match = ts.upper_bound(vrs[i].second - 1);
        a[vrs[i].second] = *match;
        int lol = *match;

        ts.erase(match);
    }
    ll ans = 0;
    for(int i  = 0; i <= n; i++){
        ans += (a[i] - i) * (ll)t[i];
    }
    cout << ans << endl;
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
}