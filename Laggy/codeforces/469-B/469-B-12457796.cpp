#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define Get2I(x,y) scanf("%d%d",&x,&y);
#define FOR(x) for(int i=0; i<x; i++)
#define FORR(x) for(int j=0; j<x; j++)
int a[51],b[51],c[51],d[51];
int main()
{
    int p,q,l,r;
    Get2I(p,q) Get2I(l,r);
    FOR(p) Get2I(a[i],b[i]);
    FOR(q) Get2I(c[i],d[i]);
    int ans=0;

    for(int k=l; k<=r; k++)
    {
        FOR(q)
        {
            int x = c[i] + k;
            int y = d[i] + k;
            bool con = 0;
            FORR(p){
                if((a[j] <= y) && (b[j] >= x)){
                    ++ans;
                    con = 1;
                    break;
                }
            }
            if(con) break;
        }
    }
    printf("%d",ans);
}

/*
5 2 27 452
148 154
421 427
462 470
777 786
969 978

245 247
313 322
*/