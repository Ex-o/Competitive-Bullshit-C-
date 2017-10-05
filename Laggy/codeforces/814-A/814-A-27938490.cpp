#include <bits/stdc++.h>
using namespace std;

int x[102];

int main(){
    int n, m;
    cin >> n >> m;
    bool ok = 0;
    for(int i = 0; i < n; i++) {
        cin >> x[i];
        if(x[i - 1] && x[i]){
            if(x[i - 1] > x[i])
                ok = 1;
        }
    }
    int z[101];
    int minz = 1 << 30;
    bool sm = 1;
    for(int i = 0; i < m; i++){
        cin >> z[i];
        if( i > 0 && z[i] != z[i-1] && sm)
            sm = 0;
        minz = min(minz, z[i]);
    }
    x[-1] = 1 << 30;

    if(!ok){
        for(int i = 0; i < n; i++){
            if(x[i] == 0){
                if(x[i - 1] > minz && i > 0){
                    ok = 1;
                    break;
                }
                else if(x[i + 1] < minz && i != n -1){
                    ok = 1;
                    break;
                }
                else if(x[i - 1] == 0 && !sm){
                    ok = 1;
                    break;
                }
                else if(sm) {
                    if (x[i - 1] - minz == 0) {
                        ok = 1;
                    }
                    else
                        ok = 0, sm = 0;
                }
            }
        }
    }

    cout << (ok ? "Yes" : "No");
}