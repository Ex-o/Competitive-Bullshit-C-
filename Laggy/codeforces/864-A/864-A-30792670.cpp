#include "bits/stdc++.h"
typedef long long ll;

using namespace std;

int a[200];
int main(){
    int n;
    cin >> n;
    set<int> num;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        num.insert(t);
        a[t]++;
    }
    vector<int> ans;
    for(set<int>::iterator i = num.begin(); i != num.end(); i++){
        if(a[*i] == n / 2) ans.push_back(*i);
    }
    if(ans.size() > 1){
        printf("YES\n%d %d\n", ans[0], ans[1]);
    }else cout << "NO";
}