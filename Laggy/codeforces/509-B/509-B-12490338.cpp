#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define Get2I(x,y) scanf("%d%d",&x,&y);
#define FOR(x) for(int i=0; i<x; i++)
#define FORR(x) for(int j=1; j<=x; j++)
#define nl printf("\n");
int main()
{
    int n,k;
    Get2I(n,k);
    int a[n];
    int cmin = 1<<30,cmax = 0;
    FOR(n){
        GetI(a[i]);
        cmin = min(cmin,a[i]);
        cmax = max(cmax,a[i]);
    }
    if(cmax - cmin > k){
        printf("NO");
        return 0;
    }
    else
        printf("YES");
        ++cmin;
    FOR(n)
    {
        nl
        int kk=1;
        FORR(a[i])
        {
            if(j <= cmin)
                printf("1 ");
            else
                printf("%d ",++kk);
        }
    }
}