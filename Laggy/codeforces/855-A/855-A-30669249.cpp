#include "bits/stdc++.h"

using namespace std;
map<string, bool> m;
int main(){
    int n;
    cin >> n;

    for(int i = 0 ; i < n; i++){
        string s; cin >> s;
        if(m[s]){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
            m[s] = 1;
        }
    }
}