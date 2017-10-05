#include <bits/stdc++.h>

using namespace std;
typedef  double d;
int main()
{
    int n , m;
    cin >> n >> m;
    int s = 0;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        s += t;
    }
    int ans = 99999999;
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= 100000; j++){
            if(round((d)(s + (i * j)) / (n + j)) == m){
                ans = min(ans, j);
                break;
            }
        }
    }
    cout << ans;
}