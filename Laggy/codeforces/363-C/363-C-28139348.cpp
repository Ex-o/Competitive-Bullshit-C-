#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> ind;
    for(int i = 0; i < max(0, (int)s.size() - 2); i++){
        if(s[i] == s[i + 1] && s[i] == s[i + 2])
            ind.push_back(i);
    }
    string ss;
    for(int i = 0, j = 0; i < s.size(); i++){
        if(ind.size() && i == ind[j]) {
            j++;
            continue;
        }
            ss += s[i];
    }
    ind.clear();
    for(int i = 0; i < max(0, (int)ss.size() - 3); i++){
        if(ss[i] == ss[i + 1] && ss[i + 2] == ss[i + 3]){
            ind.push_back(i + 3);
            i = i + 3;
        }
    }
    string sss = "";
    for(int i = 0, j = 0; i < ss.size(); i++){
        if(ind.size() && i == ind[j]) {
            j++;
            continue;
        }
        sss += ss[i];
    }
    cout << sss;
}
/*
 * aa bb aa bb aa
 * aa ba ab b
 */