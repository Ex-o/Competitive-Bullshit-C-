/*
ID: k.m.epv1
LANG: C++
TASK: beads
*/
#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define GetII(x,y) scanf("%d%d",&x,&y);
#define GetS(x) scanf("%s",&x);
#define FOR(j) for(int i=0; i<j; i++)
#define PB push_back
#define RemoveAll(x,z) x.erase(remove(x.begin(),x.end(),z),x.end());
int main()
{
    int L,X,Y; GetI(L);
    int A[L];
    A[0] = 1;
    GetI(X);
    FOR(X){
        int T; GetI(T);
        A[T] = 1;
    }
    GetI(Y);
    FOR(Y){
        int T; GetI(T);
        A[T] = 1;
    }
    FOR(L+1)
        if(A[i] != 1){
            printf("Oh, my keyboard!");
            return 0;
        }
    printf("I become the guy.");

}