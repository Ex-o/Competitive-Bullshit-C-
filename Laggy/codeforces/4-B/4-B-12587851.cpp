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
int Time[31][2];
int main()
{
    int days,sumTime;
    int totalMax=0,totalMin=0;
    Get2I(days,sumTime);

    FOR(days){
        Get2I(Time[i][0],Time[i][1]);
        totalMax+=Time[i][1];
        totalMin+=Time[i][0];
    }

    if(totalMax < sumTime || sumTime < totalMin){
        printf("NO\n"); return 0;
    }

    printf("YES\n");
    totalMax = 0;
    FOR(days){
        int X = min(sumTime-totalMin-totalMax,Time[i][1]-Time[i][0]);
        totalMax += X;
        printf("%d ",Time[i][0]+X);
    }
}