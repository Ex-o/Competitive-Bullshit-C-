#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define FOR(x) for(int i=0; i<x; i++)
int G[3][3];
int main()
{
    int nMax = 0;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            GetI(G[i][j]);

    for(int i=1 ; i<100001; i++){
            int midRow = G[1][0] + i + G[1][2];
            int mindCol = G[0][1] + i + G[2][1];
            int subDi = G[0][2] + i + G[2][0];
        if(midRow == mindCol && midRow == subDi)
        {
            int f = midRow - (G[0][1] + G[0][2]);
            int l = midRow - (G[2][0] + G[2][1]);
            int fRow = f+G[0][1]+G[0][2];
            int mainDi = f+l+i;

            if(f && l && (mainDi == midRow )&& (fRow == midRow)){
                G[0][0] = f;
                G[1][1] = i;
                G[2][2] = l;
                break;
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout << G[i][j] << " ";

        cout << endl;
    }


}