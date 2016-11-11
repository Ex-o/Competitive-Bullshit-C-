#include<bits/stdc++.h>
using namespace std;
int N,L;
int K[1005];
int main()
{
    int i;
    double mR=0,ans;
    scanf("%d%d",&N,&L);

    for(i=0; i<N; i++)
        scanf("%d",&K[i]);

    sort(K,K+N);
    for(i=0; i<N-1; i++)
        if((K[i+1] - K[i])/2.00 > mR)
            mR = (K[i+1] - K[i])/2.0;

    double B = K[0] - 0;
    double E = L - K[N-1];
    ans = max(max(mR,B),max(mR,E));

    printf("%.9f",ans);
}