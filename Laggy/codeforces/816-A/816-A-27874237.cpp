//Please?
#include<bits/stdc++.h>

using namespace std;

int main(){
    int h,m;
    scanf("%d:%d", &h, &m);
    int sh = h % 10, fh = h/10 % 10, sm = m % 10, fm = m/10 % 10;
    if(fh == sh && h < 10) fh = 0;
    if(fm == fm && m < 10) fm = 0;
    if(fh == sm && sh == fm){
        cout << 0;
        return 0;
    }
    if(h < 10 && h > 5 || (sh >= 5 && (m > sh*10 || sh > 5))){
        int ans = ((h > 10 ? 20 : 10) - h) * 60;
        ans  -= m;
        cout << (h > 10 ? ans + 2 : ans + 1);
        return 0;
    }
    if(h == 23 && m > 32){
        cout << 60 - m;
        return 0;
    }
    if(sh < fm || (fh < sm && fm >= sh)){
        int ans = 60;
        ans -= m;
        ans += (++sh * 10 + fh);
        cout << ans;
        return 0;
    }

    else{
        int ans = 0;
        ans += (sh - fm) * 10 - sm + fh;
        cout << ans;
    }
}