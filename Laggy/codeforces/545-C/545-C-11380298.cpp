#include<stdio.h>
#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n,nmax=1; scanf("%i",&n); long long x[n],h[n];
    for(int i=0; i<n ;i++)
        cin >> x[i] >> h[i];

    for(int i=1 ;i<n; i++)
    {
        if(x[i]-h[i]>x[i-1])
        {
            nmax++;
        }
        else if(x[i]+h[i]<x[i+1])
        {
            x[i] = x[i]+h[i];
            nmax++;
        }
    }
    printf("%i",nmax);
}