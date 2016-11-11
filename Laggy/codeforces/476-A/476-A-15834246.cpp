#include <bits/stdc++.h>
using namespace std;


int main ()
{
    int n,m; cin >> n >> m;

    int l = n % 2;
    int t = ( (n - l)/2 ) + l;

    while(t%m != 0)
    {
        t++;
    }

    cout << (t <= n ? t : -1);
}