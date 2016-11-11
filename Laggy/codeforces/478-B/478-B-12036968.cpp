#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    scanf("%I64d%I64d",&n,&m);
    cout << (n/m)*((n/m)-1)/2 *(m-(n%m)) + ((n/m) +1)*(n/m)/2 *(n%m) << " " << (n-(m-1))*(n-(m-1)-1) /2;
}