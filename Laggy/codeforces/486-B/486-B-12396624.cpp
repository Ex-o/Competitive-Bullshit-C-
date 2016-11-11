#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define FOR(x) for(int i=0; i<x; i++)
int G[101][101];
int J[101][101];
int nRow,nCol;
void build()
{
    for(int b=0; b<nRow; b++)
        FOR(nCol)
            if(!G[b][i]){
                for(int x=0; x<nCol; x++)
                    J[b][x] = 0;
                for(int j=0; j<nRow; j++)
                        J[j][i] = 0;
            }

}
int getOR(int a,int b)
{
    int tot = 0;
    FOR(nCol) tot+= J[a][i]; FOR(nRow) tot+=J[i][b];
  return tot;
}
int main()
{

    GetI(nRow); GetI(nCol);

    FOR(nRow)
        for(int j=0; j<nCol; j++)
            GetI(G[i][j]);

    memset(J,-1,sizeof J);


    build();

    FOR(nRow)
        for(int j=0; j<nCol; j++){
           if(G[i][j] == 1){
                if(getOR(i,j) == 0) {printf("NO"); return 0;}
           }
           else
                if(getOR(i,j) != 0) {printf("NO"); return 0;}
    }

    printf("YES\n");

    FOR(nRow){
        for(int j=0; j<nCol; j++)
            J[i][j] == -1 ? cout << "1 " : cout << "0 ";

        cout << endl;
    }
}