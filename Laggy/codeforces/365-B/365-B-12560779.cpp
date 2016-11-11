//In the name of Allah\\

#include<bits/stdc++.h>
#define GetI(x) scanf("%d",&x);
#define Get2I(x,y) scanf("%d%d",&x,&y);
#define FOR(x) for(int i=0; i<x; i++)
#define FORR(x) for(int j=1; j<=x; j++)
#define nl printf("\n");
using namespace std;
int a[100005];
int main()
{
    int n; GetI(n);

    FOR(n) GetI(a[i]);
    if(n<3) {printf("%d",n); return 0;}
    int ans = 2;
    int l = 2;

    for(int r = 2; r<n; r++){
        if(a[r] == a[r-1] + a[r-2])
            ++l;
        else l = 2;

        ans= max(ans,l);
    }

    printf("%d",ans);
}