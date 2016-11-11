#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    bool Magic = 0;
    int U = 0 , D = 0, UO = 0, DO = 0;
    for(int i=0; i<N; i++){
        int T[2];
        scanf("%d%d",T+0,T+1);
        U+=T[0];
        D+=T[1];

        if((T[0] & 1) != (T[1] & 1))
            Magic = 1;
    }

    if(!(U & 1) && !(D & 1))
        printf("0");

    else if(U&1 && D&1 && Magic)
        printf("1");
    else
        printf("-1");
}