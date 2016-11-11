//In the name of Allah\\

#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define Get2I(x,y) scanf("%d%d",&x,&y);
#define FOR(x) for(int i=0; i<x; i++)
#define FORR(x) for(int j=0; j<x; j++)
#define nl printf("\n");

long long A[101];

int main()
{
    int N,M; Get2I(N,M);
    //memset(A,0,N);
    FOR(M)
    {
        int cMax = 0,index=0;
        FORR(N)
        {
            int T;
            GetI(T);
            if(T > cMax){
                cMax = T;
                index = j;
            }
        }
        A[index]++;
    }
    int ans = 0,index=0;
    FOR(N)
    {
        if(ans < A[i]){
            ans = A[i];
            index = i;
        }
    }
    cout << index +1;
}