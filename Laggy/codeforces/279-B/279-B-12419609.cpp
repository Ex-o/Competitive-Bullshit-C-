#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define Get2I(x,y) scanf("%d%d",&x,&y);
#define FOR(x) for(int i=0; i<x; i++)
int d[100001];
int n,t;
int f(int c,int x)
{
    int b = c,s = x-1;
    while(b<=s)
    {
        int m = (b+s)/2;
        int g = c == 0 ? 0 : d[c-1];
        bool e = m == x-1 ? true : d[m+1] - g > t;
        if((d[m] - g == t) || ((d[m] - g) < t && e)) return m;
        else if (d[m] - g  > t) s = m-1;
        else b = m+1;
    }
    return -1;
}
int main()
{
    Get2I(n,t);
    GetI(d[0]);
    for(int i=1; i<n; i++){
        int v; GetI(v)
        d[i] = d[i-1] + v;
    }
    int ans =0;
    for(int i=0; i<n; i++)
    {
        int z = f(i,n);
        ans = max(ans, z >=0 ? z - i + 1 : 0);
    }
        cout << ans;
}