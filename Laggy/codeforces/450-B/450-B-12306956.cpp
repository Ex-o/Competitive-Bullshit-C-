#include<bits/stdc++.h>
using namespace std;
int d[6];
const int MOD = 1000000007;
int main()
{
    long long int F,S,N;
    scanf("%I64D%I64D%I64D",&F,&S,&N);

    d[0] = 0; d[1] = F; d[2] = S;

    for(int i=3; i<=6; ++i)
        d[i] = d[i-1] - d[i-2];

    int X = (N-1)%6;
    cout << (d[X+1]%MOD+MOD)%MOD;
}