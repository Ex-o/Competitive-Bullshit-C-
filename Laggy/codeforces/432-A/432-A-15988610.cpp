#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K;
    scanf("%d%d",&N,&K);

    int V = 0;
    for(int i=0; i<N; i++)
    {
        int T; scanf("%d",&T);
        if(T + K <= 5)
            V++;
    }
    printf("%d",V/3);
}