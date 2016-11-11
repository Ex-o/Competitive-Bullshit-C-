//In the name of Allah\\

#include<bits/stdc++.h>
#define GetI(x) scanf("%d",&x);
#define Get2I(x,y) scanf("%d%d",&x,&y);
#define FOR(x) for(int i=0; i<x; i++)
#define FORR(x) for(int j=1; j<=x; j++)
#define nl printf("\n");
int x[1000002];
int z[1000002];
using namespace std;
int main()
{
    int a,b; Get2I(a,b);
    FOR(a) GetI(x[i]);
    FOR(b) GetI(z[i]);
    int c=0;
    FOR(b){
        if(c == a) break;
        if(z[i] >= x[c])
            c++;
    }
    printf("%d",a-c);
}