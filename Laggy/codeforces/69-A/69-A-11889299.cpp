/*
ID: k.m.epv1
LANG: C++
TASK: beads
*/
#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define GetII(x,y) scanf("%d%d",&x,&y);
#define GetIII(x,y,z) scanf("%d%d%d",&x,&y,&z);
#define GetS(x) scanf("%s",&x);
#define FOR(j) for(int i=0; i<j; i++)
#define PB push_back
#define RemoveAll(x,z) x.erase(remove(x.begin(),x.end(),z),x.end());

int main()
{
    int N,S = 0; GetI(N);
    int A=0,B=0,C=0;
    FOR(N){
        int X,Y,Z; GetIII(X,Y,Z);
        A+=X; B+=Y; C+=Z;
    }
    if(A == 0 && B == 0 && C == 0)
        printf("YES");
    else
        printf("NO");
}