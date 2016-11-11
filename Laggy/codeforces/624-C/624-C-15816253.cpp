#include<bits/stdc++.h>
using namespace std;

bool E[505][505];
int nE[505];
char G[505];

int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    memset(E,0,sizeof(N));

    for(int i=0; i<M; i++){
        int a,b;
        scanf("%d%d",&a,&b);
        E[a][b] = 1;
        E[b][a] = 1;
        nE[a]++; nE[b]++;
    }

    for(int i=1; i<=N; i++)
        if(nE[i] == N-1)
            G[i] = 'b';

    for(int i=1; i<=N; i++){
        if(!G[i]) {
            G[i] = 'a';
            for(int j=1; j<=N; j++){
                if(i == j) continue;
                if(!G[j]){
                    if(E[i][j])
                        G[j] = 'a';
                    else G[j] = 'c';
                }
            }
        }
    }

    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            if(i == j) continue;

            if(G[i] == 'a') if(((G[j] != 'b' && G[j] != 'a') && E[i][j]) || ((G[j] == 'b' || G[j] == 'a') && !E[i][j])) { printf("No"); return 0;}
            if(G[i] == 'c') if(((G[j] != 'b' && G[j] != 'c') && E[i][j]) || ((G[j] == 'b' || G[j] == 'c') && !E[i][j])) { printf("No"); return 0;}

        }
    }
    printf("Yes\n");
    for(int i=1; i<=N; i++) printf("%c",G[i]);
}