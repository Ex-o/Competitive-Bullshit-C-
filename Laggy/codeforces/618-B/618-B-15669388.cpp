#include<bits/stdc++.h>
using namespace std;

int P[51];

int main()
{
    int N;
    int A;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++){
            scanf("%d",&A);
            P[i] = max(P[i],A);
        }
    bool B = 0;
    for(int i=0; i<N; i++){
        if(P[i] == N-1 && !B){
                B = !B;
            P[i] = N;
        }
        printf("%d ",P[i]);
    }
}