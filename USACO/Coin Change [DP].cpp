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
string C;
string B;
int N;
int X;
int A[10005];
int dp[10005];
int Solve(int C)
{
    if(C == 0) return 0;
    if(dp[C] != -1) return dp[C];
    int Coins = C;
    FOR(N){
        if(C >= A[i])
            Coins = min(Coins,C/A[i]+Solve(C-(C/A[i])*A[i]));
        else break;
    }
    dp[C] = Coins;
    return Coins;
}
int main()
{
    int sol=0;
    GetII(N,X);
    memset(dp,-1,sizeof dp);
    FOR(N)
        GetI(A[i]);
        sort(A,A+N);
    cout << Solve(X);
}

