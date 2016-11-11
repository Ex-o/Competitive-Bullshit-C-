#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long i,j,k,l,m,n,t;
    long long ans=0;
    scanf("%I64d%I64d",&n,&m);
    if(n<m)
    {
        t=n;
        n=m;
        m=t;
    }

    while(m !=1 && n%m != 0)
    {
        ans += n/m;
        i=n;
        j=m;
        n=j;
        m=i%j;
    }
    ans += n/m;
    printf("%I64d\n",ans);
}