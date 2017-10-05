#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef long double ld;
vector<pair<ll, int>> per;
int main(){
    ll n;
    cin >> n;

    for(ll i = 1; i <= 1000000 && i * i <= n; i++)
        per.push_back({i * i, i});

    per.push_back({1LL << 60, 0});
    ll mx = 0, mxx = 0, s;
    for(int i = 0; i < per.size(); i++){
        if(per[i].first > n){
            mx = per[i - 1].second * 4;
            s = per[i - 1].second;
            mxx = per[i - 1].first;
        }
    }
    //cout << ceil((n - mxx) / s * 1.000) << endl;
    cout << mx + ceil((n - mxx) / (double)s) * 2;

}