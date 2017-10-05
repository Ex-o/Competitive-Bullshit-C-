#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << "YES";
        return 0;
    }
    bool f = 0, s = 0, t = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > a[i - 1]) {
            if(t || s){
                cout << "NO";
                return 0;
            }
            f = 1;
        }
        else if(a[i] == a[i - 1]){
            if(t){
                cout << "NO";
                return 0;
            }
            s  = 1;
        }
        else if(a[i] < a[i - 1]){
            t  = 1;
        }
    }


    if(f && t || (f && !s && !t) || (s && !f && !t) || (s & !f && t) || (t && !f && !s) || (f && s)){
        cout << "YES";
    }
    else cout << "NO";
}