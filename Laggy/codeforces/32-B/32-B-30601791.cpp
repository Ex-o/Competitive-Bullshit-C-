#include "bits/stdc++.h"
using namespace std;

int main(){
    string s;
    cin >> s;
    string str2;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.'){
            str2 += "0";
        }
        if(s[i] == '-' ){
            if(s[i + 1] == '-') str2 += "2", i++;
            else if(s[i + 1] == '.') str2 += "1", i++;
        }

    }

    cout << str2;
}