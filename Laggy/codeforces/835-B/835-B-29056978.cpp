#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    long long sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }

    sort(s.begin(), s.end());
    int idx = 0;
    while(sum < n){
        sum -= (s[idx] - '0');
        sum += 9;
        idx++;
    }
    cout << idx;
}