#include <bits/stdc++.h>

using  namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int r = 0, rr = 0;
    bool e = 0, o = 0;
    for(int i = 0; i < 100000; i++) {
        long long x = i*(i+1);
        if(x > b && !e){
            r = i - 1;
            e = 1;
        }
        x = i*i;
        if(x > a && !o){
            rr = i - 1;
            o = 1;
        }
    }
    if(r < rr)
        cout << "Valera";
    else
        cout << "Vladik";
}