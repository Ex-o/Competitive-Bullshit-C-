#include <bits/stdc++.h>

using  namespace std;
int m[55][55];
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(m[i][j] == 1) continue;
            bool ok = 0;
            for(int k = 0; k < n; k++){
                for(int c = 0; c < n; c++){
                    if(m[i][k] + m[c][j] == m[i][j])
                        ok = 1;
                }
            }
            if(!ok){
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
}