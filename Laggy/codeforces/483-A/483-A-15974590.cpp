#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,r; cin >> l >> r;
    long long a = 0, b=0,c=0;
    for(long long i = l; i<=r; i++)
    {
        if(!(i & 1) && (i+2 <= r))
            a = i, b = ++i, c = ++i;
    }
    if(!a || !b || !c){
        cout << -1;
        return 0;
    }
    cout << a << " " << b << " " << c;
}