#include "bits/stdc++.h"
using namespace std;
int prefix[1000 * 1000 + 5];
int main(){
    int n, k; cin >> n >> k;

    for(int i = 0; i < n; i++){
        int t; cin >> t;
        prefix[i] = prefix[i - 1] + t;
    }
    int s = 1e9, idx = 0;
    for(int i = k - 1; i < n; i++){
        if(prefix[i] - prefix[i - k] < s){
            s = prefix[i] - prefix[i - k];
            idx = max(1, i - (k - 1) + 1);
        }
    }
    cout << idx;
}