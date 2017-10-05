#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

const int MAX = 1e5 + 50;
ll cl[MAX], cr[MAX];
ll ca[MAX], a[MAX];

struct q{
    int l , r , d;
};
q qq[MAX];
int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= m; i++)
        cin >> qq[i].l >> qq[i].r >> qq[i].d;

    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        cl[x]++;
        cl[y + 1]--;
    }
    ll c = 0;
    for(int i = 1; i <= m; i++){
        c += cl[i];

        ca[qq[i].l] += c * qq[i].d;
        ca[qq[i].r + 1] -= c * qq[i].d;
    }
    ll f = 0;
    for(int i = 1; i <= n; i++){
        f += ca[i];
        cout << a[i] + f << " ";
    }
}