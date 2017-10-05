#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef long double ld;
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main(){
    ll n, k;
    cin >> n >> k;
    ll f = n;
    ll c = 1;

    for(int i = 0; i < k; i++)
        c *= 10;
    ll d = c;
    if(k == 0){
        cout << n << endl;
        return 0;
    }

    ll x = gcd(c, n);
    n /= x;
    c /= x;
    ll ans = n * d;

    cout << ans;
}