#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef long double ld;
bool c[1000 * 1000 + 6];
vector<int> b;
int main(){
    int k; cin >> k;
    int mx = 0;
    for(int i = 0; i < k; i++){
        int t; cin >> t;
        c[t] = 1;
        b.push_back(t);
        mx = max(mx, t);
    }

    if(k == 25){
        int a = 0;
        for(int i = 1; i <= mx; i++ ){
            if(!c[i]) a++;

        }
        cout << a;
        return 0;
    }
    sort(b.begin(), b.end());
    int idx = 0;
    int ans = 0;
    int cur = 25;
    for(int i = 0; i < b.size(); i++){
        if(b[i] > 25) ans += b[i] - cur, cur = b[i];
    }
    cout << ans;
    return 0;
}