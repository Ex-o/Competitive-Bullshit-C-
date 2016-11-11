#include<bits/stdc++.h>
using namespace std;
int C[100005],V[100005],F[100005];
int main()
{
    int N,i,j;
    int lRight,lLeft,Pst = -1,Nst=-1,ans=0,ans2 = 0;
    scanf("%d",&N);

    for(i=0; i<N; ++i)
        scanf("%d%d",&C[i],&V[i]);

    for(i=0; i<N-1; i++)
        for(j=0; j<N-i-1; j++)
            if(C[j] > C[j+1]){
                swap(C[j],C[j+1]);
                swap(V[j],V[j+1]);
            }

    for(i=0; i<N; i++)
        if(C[i] > 0){
            Pst = i;
            Nst = i-1;
            break;
        }
        if(Pst == -1)
            Nst = N-1;

    int cur;
    bool A = 0,B = 1;
    if(Pst >= 0){
        if(Pst == 0)
            B = 0;
        lRight = Pst;
        lLeft = Pst;
        cur = Pst;
        A = 1;
        ans += V[cur];
    }
    while(A)
    {
        if(lLeft > 0) ans += V[--lLeft]; else break;
        if(lRight < N-1) ans += V[++lRight]; else break;
    }
    if(Nst >= 0){
        lRight = Nst;
        lLeft = Nst;
        cur = Nst;
        ans2 += V[cur];
    }
    while(B)
    {
        if(lRight < N-1) ans2 += V[++lRight]; else break;
        if(lLeft > 0) ans2 += V[--lLeft]; else break;
    }
    cout << max(ans,ans2);
}