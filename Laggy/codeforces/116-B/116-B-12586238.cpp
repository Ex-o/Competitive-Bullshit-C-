//In the name of Allah\\

#include<bits/stdc++.h>
#define GetI(x) scanf("%d",&x);
#define GetC(x) scanf("%c",&x);
#define Get2I(x,y) scanf("%d%d",&x,&y);
#define FOR(x) for(int i=0; i<x; i++)
#define FORR(x) for(int j=0; j<x; j++)
#define put(x) printf("%d",x);
#define nl printf("\n");
using namespace std;
const char p = 'P';
const char w = 'W';
int a[1003];
int main()
{
    int n,m; Get2I(n,m);
    char g[11][11];
    int ans = 0;

    FOR(n)
        FORR(m)
            cin >> g[i][j];

    FOR(n)
        FORR(m)
            if(g[i][j] == w)
                if(g[i+1][j] == p || g[i-1][j] == p || g[i][j+1] == p || g[i][j-1] == p)
                    ans++;

    put(ans);
}