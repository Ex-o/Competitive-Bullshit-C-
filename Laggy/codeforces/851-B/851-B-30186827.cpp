//THIS IS GONNA TLE :D
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

ll dist(ll x1, ll y1, ll x2, ll y2){
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}
int main() {
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if(!((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) && dist(x1, y1, x2, y2) == dist(x2, y2, x3, y3))
        cout << "Yes";
    else cout << "No";
}