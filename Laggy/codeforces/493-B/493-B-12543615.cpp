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
    int n; GetI(n);
    long long ft=0,st=0;
    vector<int> f,s;
    int la=0;
    FOR(n)
    {
        int x; GetI(x)
        if(x > 0){
                ft+=x;
                f.push_back(x);
        }
        else {
                st+=abs(x);
                s.push_back(abs(x));
        }
            la=x;
    }
    if(ft > st){ printf("first"); return 0;} else if(st > ft) { printf("second"); return 0;}

    int l = f.size();

    FOR(l)
    {
        if(s[i] != f[i])
            if(s[i] > f[i]){
                    printf("second");
                    return 0;
            }else{
                    printf("first");
                    return 0;
            }
    }

    if(st == ft)
        la > 0 ? printf("first") : printf("second");
}