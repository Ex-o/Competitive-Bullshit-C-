#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int a[3000003], t[3000003];
vector<pair<int, int>> vrs;
set<int> ts;
int main() {
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        scanf("%d", &t[i + 1]);
        vrs.push_back({t[i + 1], i + 1});
        ts.insert(i + 1 + k);
    }

    sort(vrs.rbegin(), vrs.rend());
    ll ans = 0;
    for(int i = 0; i < n; i++){
        set<int>::iterator match = ts.upper_bound(vrs[i].second - 1);
        a[vrs[i].second] = *match;
        ans += (ll)(*match - vrs[i].second) * (t[vrs[i].second]);
        ts.erase(match);
    }
    printf("%I64d\n", ans);
    for(int i  = 1; i <= n; i++)
        printf("%d ", a[i]);
}