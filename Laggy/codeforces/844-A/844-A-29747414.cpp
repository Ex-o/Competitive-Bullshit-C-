#include "bits/stdc++.h"
using namespace std;
bool uni[5000];
int main(){
    string s;
    int k;
    cin >> s >> k;

    if(s.size() < k){
        cout << "impossible";
        return 0;
    }
    int ans = 0, unii = 0;
    for(int i = 0; i < s.size(); i++) {
        if (!uni[(int) s[i]]) {
            unii++;
            uni[s[i]] = 1;
        }
    }
    cout << max(0, k - unii) << endl;
}