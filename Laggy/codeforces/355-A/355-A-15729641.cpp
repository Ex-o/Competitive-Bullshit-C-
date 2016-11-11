#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,M;
    scanf("%d%d",&N,&M);

    if((N == 1 && M>9) || (N > 1 && !M)){
        printf("No solution");
        return 0;
    }
    --N;
    printf("%d",M);
    while(N--)
        printf("0");
}