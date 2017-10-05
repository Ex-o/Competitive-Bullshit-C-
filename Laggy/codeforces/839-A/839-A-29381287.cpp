#include "bits/stdc++.h"
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];

    int ans = 0;
    int s = 0;
    int total = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        total += a[i];
        s += min(8, total);
        total -= min(8, total);

        if(s >= k){
            cout << i + 1;
            return 0;
        }
    }

    cout << -1;

}