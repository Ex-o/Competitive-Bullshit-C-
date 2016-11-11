#include<bits/stdc++.h>
using namespace std;

int main()
{
    int R,C;
    scanf("%d%d",&R,&C);

    char G[15][15];
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            cin >> G[i][j];

    bool E[11];
    memset(E,0,sizeof(E));
    int A = 0;
    for(int i=0; i<R; i++){
        bool V = 1;
        for(int j =0; j<C; j++)
        {
            if(G[i][j] == 'S'){
                V = 0;
                break;
            }
        }
        if(V)
            A+=C, E[i] = 1;
    }
    //printf("%d\n",A);
    for(int i=0; i<C; i++){
        bool V = 1;
        int T = 0;
        for(int j=0; j<R; j++){
            if(G[j][i] == 'S'){
                V = 0;
                break;
            }
            if(!E[j]) T++;
        }
        if(V) A+=T;
    }
    printf("%d",A);
}