#include <bits/stdc++.h>

using namespace std;
char grid[105][105];

int main() {
    int n, m;
    cin >> n >> m;

    int up = 5555, dw = -1, lf = 5555, rt = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char t; cin >> t;
            grid[i][j] = t;
            if(grid[i][j] == 'B'){
                up = min(up, i);
                dw = max(dw, i);
                lf = min(j, lf);
                rt = max(j, rt);
            }
        }
    }

    if(dw - up + 1 > m || rt - lf + 1 > n){
        cout << -1;
        return 0;
    }
    else if(up == 5555 && dw == -1 && lf == 5555 && rt == -1){
        cout << 1;
        return 0;
    }

    int sz = max(dw - up, rt - lf) + 1;
    int szm = min(dw - up, rt - lf) + 1;
    int ans = 0;
    for(int i = up; i <= dw; i++){
        for(int j = lf; j <= rt; j++){
            if(grid[i][j] == 'W')
                ans++;
        }
    }
    cout << ans + (sz - (szm))*sz;
}