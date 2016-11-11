#include<bits/stdc++.h>
using namespace std;
int N,M,K,X=0;

int J[2097152];
int main()
{
   scanf("%d%d%d",&N,&M,&K);
   for(int i=0; i<M+1; i++)
        scanf("%d",&J[i]);

   for(int i=M-1; i>=0; i--)
        if(__builtin_popcount(J[M] ^ J[i]) <= K)
            X++;

   printf("%d",X);
   return 0;
}