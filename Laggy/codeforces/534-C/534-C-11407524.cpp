#include<stdio.h>
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
    long long n,s; scanf("%I64d%I64d",&n,&s); long long d[n];
    long long sum=0,t;
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&d[i]);
        sum+=d[i];
    }
    for(int i=0;i<n;i++)
    {
        t=0;
        long long b = max(1LL,(s-(sum-d[i])));
        long long l = min(d[i],(s-(n-1)));
        for(int i=b; i<=l; i++)
               t++;
        printf ("%I64d%s",d[i]-t," ");

    }
}