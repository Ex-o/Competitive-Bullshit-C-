#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0;
    while(n--){
        int f = 3;
        int c = 0;
        while(f--){
            int t; cin >> t;
            c += t;
        }
        if(c >= 2) ++a;
    }
    cout << a;
}