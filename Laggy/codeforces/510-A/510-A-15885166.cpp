#include<bits/stdc++.h>
using namespace std;
char G[51][51];
int main()
{
    int N=3,M=3;
    cin >> N >> M;

    memset(G,'.',sizeof(G));
    int X = M-1;

    for(int i=1; i<N; i+=2){
        G[i][X] = '#';
        if(X) X = 0; else X = M-1;
    }

    for(int i=0; i<N; i+=2){
       for(int j=0; j<M; j++)
        G[i][j] = '#';
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << G[i][j];
        }
        cout << endl;
    }
}