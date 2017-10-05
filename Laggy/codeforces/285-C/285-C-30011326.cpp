#include "bits/stdc++.h"
using namespace std;
vector<int> p;

int main(){
    int n;
    scanf("%d", &n);
    long long ans = 0;
    for(int i = 0; i < n; i++){
        int t; scanf("%d", &t);
        if(t < 0) ans += -t;
        p.push_back(max(0, t));
    }
    sort(p.begin(), p.end());
    for(int i = 0; i < n; i++){
        ans += abs((i + 1) - p[i]);
    }

    cout << ans;
}