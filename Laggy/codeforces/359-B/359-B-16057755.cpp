#include<bits/stdc++.h>
using namespace std;
int A[2*50005];
int main()
{
    int N,K;
    scanf("%d%d",&N,&K);
    for(int i=1; i<=2*N; i++)
        A[i] = i;

    for(int i=2*N; i>0 && K; i-=2,K--)
        swap(A[i],A[i-1]);

    for(int i=1; i<=2*N; i++)
        printf("%d ",A[i]);
}