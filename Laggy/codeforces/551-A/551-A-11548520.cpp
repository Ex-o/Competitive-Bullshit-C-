#include<bits/stdc++.h>
using namespace std;
int M[2005];
int N;
void Run(int cur)
{
    int temp=0;
    for(int i=0; i<N; i++)
        if(M[cur]<M[i])
            temp++;

        printf("%i ",temp+1);
}
int main()
{
     scanf("%i",&N);
    for(int i =0; i<N; i++)
        scanf("%i",&M[i]);

    for(int i=0; i<N; i++)
        Run(i);
}