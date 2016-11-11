#include<bits/stdc++.h>
using namespace std;
#define el printf("\n");
int main()
{
    int A;
    scanf("%d",&A);
    vector<int> N,P,Z;

    for(int i=0; i<A; i++){
        int T; scanf("%d",&T);
        if(T == 0) Z.push_back(0);
        else if(T<0) N.push_back(T);
        else P.push_back(T);
    }

    int nSize = N.size(),pSize = P.size(),zSize = Z.size();
    if(!pSize)
    {
        P.push_back(N[nSize-1]);
        P.push_back(N[nSize-2]);
        nSize-=2;
    }

    if(!(nSize & 1)){
        Z.push_back(N[nSize-1]);
        --nSize;


    }

    printf("%d ",nSize);
    for(int i=0; i<nSize; i++) printf("%d ",N[i]);
    el
    printf("%d ",P.size());
    for(int i=0; i<P.size(); i++) printf("%d ",P[i]);
    el
    printf("%d ",Z.size());
    for(int i=0; i<Z.size(); i++) printf("%d ",Z[i]);
}