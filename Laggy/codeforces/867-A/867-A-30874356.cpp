#include "bits/stdc++.h"
typedef long long ll;

using namespace std;

int main(){
    int n; cin >> n;
    string s;
    cin >> s;
    int F = 0, S = 0;
    char lst;
    if(s[0] == 'F'){
        lst = 'F';
    }
    else lst = 'S';
    for(int i = 1; i < s.size(); i++){
        if(s[i] == 'S' && lst == 'F') S++, lst = 'S';
        else if(s[i] == 'F' && lst == 'S') F++, lst = 'F';
    }
    if(S < F) cout << "YES";
    else cout << "NO";
}