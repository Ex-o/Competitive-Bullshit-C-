#include "bits/stdc++.h"
using namespace std;
int ar[105];
int main(){
    int n, x;
    cin >> n >> x;
    int mx = -1;
    int c = 0;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        ar[t] = 1;
        mx = max(t, mx);
        if(t > x + 1) c++;
    }
    if(x == 0){
        if(!ar[0]){
            cout << 0;
            return  0;
        }
        cout << 1;
        return 0;
    }
    int ans = 0, ans2 = 0;
    for(int i = 0; i <= x; i++){
        if(!ar[i] && (i < x)){
            ans++;
        }
    }
    if(ar[x]) ans++;

    cout << ans;
}