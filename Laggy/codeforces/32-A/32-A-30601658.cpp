#include "bits/stdc++.h"
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] - v[j] <= d) ans++;
            else break;
        }
    }
    cout << ans * 2;
}