#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);

    int mx = max(A*D,B*C);
    int mn = min(A*D,B*C);
    int diff = (mx - mn);
    int gcd = __gcd(diff,mx);

    printf("%d/%d",diff/gcd,mx/gcd);
}