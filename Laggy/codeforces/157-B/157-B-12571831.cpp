//In the name of Allah\\

#include<bits/stdc++.h>
#define GetI(x) scanf("%d",&x);
#define Get2I(x,y) scanf("%d%d",&x,&y);
#define FOR(x) for(int i=0; i<x; i++)
#define FORR(x) for(int j=1; j<=x; j++)
#define nl printf("\n");
using namespace std;
const double pi = 3.141592653589793;
int main()
{
    double ans = 0.0;
    int n; GetI(n)
    int r[n];
    FOR(n) GetI(r[i]);
    sort(r,r+n);
    int per = 1;
    for(int i=n-1; i>=0; --i){
        ans+= (pi * (r[i] * r[i])) *per;
        per*=-1;
    }
    printf("%.10f",ans);
}