#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    int Ar[110];
    for(int i=0; i<N; i++)
        scanf("%d",&Ar[i]);

    int A = 0, B = 0, C = 0 , D =0;
    for(int i=0; i<N; i++)
        if(Ar[i] & 1)
            B++,D = i+1;
        else
            A++,C = i+1;

    A == 1 ? printf("%d",C) : printf("%d",D);
}