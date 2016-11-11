#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K;
    scanf("%d%d",&N,&K);

    if(K >= N){
        printf("-1");
        return 0;
    }

    printf("%d ",N-K);
    int i = 1;
    while(i < N-K)
        printf("%d ",i),i++;


    while(++i<=N)
        printf("%d ",i);
}