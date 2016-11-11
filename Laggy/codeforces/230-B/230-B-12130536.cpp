#include<bits/stdc++.h>
using namespace std;
const int MAAX = 1000001;
int Prime[MAAX] = {0};
int main()
{
    Prime[1] = 1;
    for(int i=2; i<MAAX; i++)
    {
        if(!Prime[i])
        {
            for(int j=i+i; j<MAAX; j+=i)
                Prime[j] = 1;
        }
    }
    int T; scanf("%d",&T);
    while(T--)
    {
        long long A; scanf("%I64D",&A);
        long long B = sqrt(A);

        if(!Prime[B] && B*B == A)
            printf("YES\n");
        else
            printf("NO\n");
    }
}