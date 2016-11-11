/*
ID: k.m.epv1
LANG: C++
TASK: beads
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define GetII(x,y) scanf("%d%d",&x,&y);
#define GetS(x) scanf("%s",&x);
#define FOR(j) for(int i=0; i<j; i++)
#define PB push_back
#define RemoveAll(x,z) x.erase(remove(x.begin(),x.end(),z),x.end());
int T[1005];
int N,W;
int dp[3][31][1005];
int Solve(int myPlace,int L,int P)
{
    int X=0,Y=0;
    if(P == N) return 0;
    if(dp[myPlace][L][P] != -1) return dp[myPlace][L][P];
    if(myPlace == T[P]) Y = 1 + Solve(myPlace,L,P+1);
    if(myPlace != T[P] && L){
        myPlace == 1 ? X=Solve(2,L-1,P+1)+1 : X=Solve(1,L-1,P+1)+1;
        Y+=Solve(myPlace,L,P+1);
    }
    else if(!L && myPlace != T[P])
        Y=Solve(myPlace,L,P+1);

    dp[myPlace][L][P] = max(X,Y);
    return dp[myPlace][L][P];
}
int main()
{
    GetII(N,W);
    FOR(N)
        GetI(T[i]);
    memset(dp,-1,sizeof dp);
    cout << Solve(1,W,0);
}
