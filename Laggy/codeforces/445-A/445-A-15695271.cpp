#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    scanf("%d%d",&N,&M);

    char G[N][M];

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin >> G[i][j];

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(G[i][j] == '.'){
                if((i +j) & 1)
                    G[i][j] = 'B';
                else
                    G[i][j] = 'W';
            }
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << G[i][j];
        }
        cout << endl;
    }
}