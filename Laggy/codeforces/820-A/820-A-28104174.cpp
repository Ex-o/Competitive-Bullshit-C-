#include <bits/stdc++.h>
using namespace std;

int main(){
    int c, v, v1, a, l;
    cin >> c >> v >> v1 >> a >> l;

    int ans = 1;
    c -= v;
    if(c > 0)
        c += l;
    int aa = 1;
    while(c > 0){
        c -= min(v1, v + (a*aa));
        if(c > 0)
            c += l;
        aa++;
        ans++;
    }
    cout << ans;
}