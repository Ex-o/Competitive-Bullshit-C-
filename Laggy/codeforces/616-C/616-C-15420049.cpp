#include <bits/stdc++.h>
    using namespace std;
    #define L(x) for(int i=0; i<x; i++)
    #define LL(x) for(int j=0; j<x; j++)

    char G[1002][1002];
    int H[1002][1002];
    bool V[1002][1002];
    int D[1000006];
    int N,M;
    int X;
    int dInd(int i,int j)
    {
        if(i<0 || j<0 || i== N || j == M ) return 0;

        return H[i][j];
    }
    int Grab(int i, int j)
    {
        int ret=1;
        set<int> GS;
                    GS.insert(dInd(i+1,j));
                    GS.insert(dInd(i-1,j));
                    GS.insert(dInd(i,j-1));
                    GS.insert(dInd(i,j+1));
        for(set<int>::iterator it = GS.begin(); it!=GS.end(); it++)
            ret+= D[*it]%10;

        return ret%10;
    }

    void Kik(int i, int j)
    {
        if(i<0 || j<0 || i== N || j == M || G[i][j] == '*' || V[i][j]) return;

        V[i][j] = 1;
        Kik(i,j+1);
        Kik(i,j-1);
        Kik(i+1,j);
        Kik(i-1,j);
        H[i][j] = X;
        D[X]++;
    }
    int main()
    {
        scanf("%d%d",&N,&M);
        memset(H,0,sizeof(H));
        memset(V,0,sizeof(V));
        memset(D,0,sizeof(D));
        L(N)
            LL(M)
                    scanf(" %c",&G[i][j]);
        X=1;

        L(N){
            LL(M){
                if(G[i][j] == '.' && H[i][j] == 0){
                    Kik(i,j);
                    X++;
                }
            }
        }

        L(N){
            LL(M){
                if(G[i][j] == '*'){
                    printf("%d",Grab(i,j));
                }
                else printf(".");
            }
            printf("\n");
        }
    }