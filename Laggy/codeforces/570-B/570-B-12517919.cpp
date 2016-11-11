//In the name of Allah\\

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,M;
    scanf("%I64D%I64D",&N,&M);
    if(N == 1){
        printf("1");
        return 0;
    }
    if(N-M > M-1)
        cout << M+1;
    else if(N-M == M-1)
        cout << M-1;
    else
        cout << M-1;
}