#include "bits/stdc++.h"
using namespace std;
int a[105];
int main(){
    int n,k;
    cin >> n >> k;
    int odds = 0;
    for(int i = 0; i < k; i++){
        cin >> a[i];
        if(a[i] & 1) odds++;
    }

    sort(a, a + k, greater<int>());
    int seats = 8 * n;
    int used_rows = 0;
    for(int i = 0; i < k; i++){
        while(a[i] >= 4){
            seats -= 4;
            a[i] -= 4;
            used_rows++;
        }
    }
    if(used_rows < n) {
        seats -= (n - used_rows);
        seats += min(n - used_rows, odds);
    }
    for(int i = 0; i < k; i++){
        if(a[i] > 0){
            seats -= a[i] + (a[i] & 1);
        }
    }
    if(seats < 0){
        cout << "NO";
    }
    else cout << "YES";
}