#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define GetII(x,y) scanf("%d%d",&x,&y);
#define GetS(x) scanf("%s",&x);
#define FOR(j) for(int i=0; i<j; i++)
#define PB push_back
int main()
{
    int N; GetI(N);
    int A[102],B[102],F[102];
    vector<int> C;
    memset(A,0,sizeof A); memset(B,0,sizeof B); memset(F,0,sizeof F);
    FOR(N)
    {
        int X,Y; GetII(X,Y);
        A[X]++; B[Y]++;
        if(F[X] != 1) {C.PB(X); F[X] = 1;}
    }
    int ans=0;
    FOR(C.size())
    {
        ans+= A[C[i]] * B[C[i]];
    }
    cout << ans;
}