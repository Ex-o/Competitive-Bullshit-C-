#include "bits/stdc++.h"
typedef long long ll;

using namespace std;
string s;
int calc(int l, int r){
    set<char> st;
    for(int i = l; i <= r; i++)
        st.insert(s[i]);

    return (int)st.size();
}
int a[200];
int main(){
    int n; cin >> n;
     cin >> s;
    int idx = 0;
    vector<int> pos;
    pos.push_back(-1);
    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])) pos.push_back(i);
    }
    pos.push_back(s.size());
    int ans = 0;
    for(int i = 0; i < pos.size() - 1; i++){
        ans = max(ans, calc(pos[i] + 1, pos[i + 1] - 1));
    }
    cout << ans;
}