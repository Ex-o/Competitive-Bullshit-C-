#include <bits/stdc++.h>
using namespace std;

long long x[100005];

int main(){
    int n;
    cin >> n;
    int mx = 0;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        x[t] += t;
        mx = max(mx,t);
    }
    for ( int i = 2 ; i <= mx ; i++ )
        x[ i ] = max ( x [ i - 1 ] , x [ i - 2 ] + x [ i ] );
    cout << x[mx];
    return 0;
}