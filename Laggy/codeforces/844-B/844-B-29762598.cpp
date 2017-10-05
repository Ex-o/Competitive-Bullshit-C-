#include "bits/stdc++.h"
using namespace std;
bool grid[55][55];
int main(){

    //cout << ((1LL << 50) * 2 * 50) - (51 * 2 * 50);
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    long long ans = m * n;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++){
            if(grid[i][j]) cnt++;
        }
        ans += (1LL << cnt) - cnt - 1;
        ans += (1LL << (m - cnt)) - (m - cnt) - 1;
    }
    for(int i = 0; i < m; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(grid[j][i]) cnt++;
        }
        ans += (1LL << cnt) - cnt - 1;
        ans += (1LL << (n - cnt)) - (n - cnt) - 1;
    }

    cout << ans ;
}