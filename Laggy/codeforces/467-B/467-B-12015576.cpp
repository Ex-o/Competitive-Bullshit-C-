#include<bits/stdc++.h>
using namespace std;
int N,M,K,X=0;
bitset<32> x(int i)
{
    bitset<32> t(i);
    return t;
}
int J[2097152];
int main()
{
   scanf("%d%d%d",&N,&M,&K);
   M++;
   for(int i=0; i<M; i++)
    scanf("%d",&J[i]);
    M--;
   string Q = x(J[M]).to_string();
   for(int i=M-1; i>=0; i--)
   {
       string T = x(J[i]).to_string();
       int D = 0;
       for(int j=0; j<32; j++)
            if(Q[j] != T[j])
                D++;
        if(D <= K)
            X++;
   }
   cout << X;
}