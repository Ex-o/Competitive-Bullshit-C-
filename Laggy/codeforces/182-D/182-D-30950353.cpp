#include "bits/stdc++.h"
using namespace std;
set<int> div(int x){
    set<int> ret;
    for(int i = 1; i < sqrt(x) + 1; i++){
        if(x % i == 0){
            ret.insert(i), ret.insert(x / i);
        }
    }
    return ret;
}
int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int len_1 = s1.size(), len_2 = s2.size();
    vector<int> di(1000);
    auto f = div(len_1);
    auto s = div(len_2);
    vector<int>::iterator it = set_intersection(f.begin(), f.end(), s.begin(), s.end(), di.begin());
    di.resize(it-di.begin());
    int ans = 0;
    for(vector<int>::iterator i = di.begin(); i != di.end(); i++){
        if(*i <= min(len_1, len_2)){
            string str = s1.substr(0, *i);
            string str2 = "", str3 = "";
            for(int j = 0; j < len_1 / *i; j++){
                str3 += str;
            }
            for(int j = 0; j < len_2 / *i; j++){
                str2 += str;
            }
            if(str2 == s2 && str3 == s1) ans++;
        }
    }
    cout << ans;
}