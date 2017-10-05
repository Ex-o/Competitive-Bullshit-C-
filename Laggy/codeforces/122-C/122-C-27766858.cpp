//Woho, no silly optimizations.

#include<bits/stdc++.h>

using namespace std;
long long l,r;
vector<long long> lky;
void go(long long x)
{
    if(x > 10000000001) return;
    lky.push_back(x);
    go(x*10 + 4);
    go(x*10 + 7);
}

long long nxt(long long x)
{
    for(int i = 0; i < lky.size(); i++)
        if(lky[i] >= x) return lky[i];
}

int main(){
    cin >> l >> r;
    go(4); go(7);
    sort(lky.begin(), lky.end());

    long long lst = nxt(l);
    long long ans = 0;
    while(l <= r){
        if(r < lst){
            ans += (r - l + 1) * lst;
            break;
        }
        else{
            ans += (lst - l + 1) * lst;
            l = lst + 1;
            lst = nxt(l);
        }
    }
    cout << ans;
}