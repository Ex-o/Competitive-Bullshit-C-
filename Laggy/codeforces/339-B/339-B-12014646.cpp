#include<bits/stdc++.h>
using namespace std;
int J[100007];
int N,M;
int main()
{
    scanf("%d%d",&N,&M);
    long long int P = 1,S=0;
    for(int i=0; i<M; i++)
        scanf("%d",&J[i]);

    for(int i=0; i<M; i++){
        if(P <= J[i]){
            S+= J[i] - P;
            P = J[i];
        }
        else{
            S+= (N - P) + J[i];
            P = J[i];
        }
    }
    printf("%I64d ",S);
}