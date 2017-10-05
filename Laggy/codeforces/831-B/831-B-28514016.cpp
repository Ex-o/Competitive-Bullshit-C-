#include <bits/stdc++.h>
using namespace std;


int main() {

    string s, ss, sss;
    cin >> s >> ss >> sss;
    map<char, char> mp;
    for(int i = 0 ; i < 26; i++){
        mp[s[i]] = ss[i];
    }

    for(int i = 0; i < sss.size(); i++){
        if(isdigit(sss[i])){
            cout << sss[i];
            continue;
        }
        if(isupper(sss[i])){
            cout << (char)toupper(mp[tolower(sss[i])]);
        }
        else
            cout << mp[sss[i]];

    }
}