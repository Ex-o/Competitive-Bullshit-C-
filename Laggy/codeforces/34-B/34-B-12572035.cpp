//In the name of Allah\\

#include<bits/stdc++.h>
#define GetI(x) scanf("%d",&x);
#define Get2I(x,y) scanf("%d%d",&x,&y);
#define FOR(x) for(int i=0; i<x; i++)
#define FORR(x) for(int j=1; j<=x; j++)
#define nl printf("\n");
using namespace std;

int main()
{
    int n,m;
    Get2I(n,m);
    int ans =0;
    vector<int>a (n,0);
    FOR(n){
        int x;
        GetI(x)
        if(x < 0) a.push_back(x*-1);
    };
    sort(a.begin(),a.end(),greater<int>());
    n = a.size();
    FOR(m) ans+=a[i];
    cout << ans;
}