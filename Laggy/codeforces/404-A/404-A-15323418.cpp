#include <bits/stdc++.h>
using namespace std;
#define g(x) scanf("%d",&x)
int main()
{
    int nSide; g(nSide);
    char Grid[nSide][nSide];

    for(int i=0; i<nSide; i++)
        for(int j=0; j<nSide; j++)
            cin >> Grid[i][j];

    char firstChar = Grid[0][0];
    char secondChar = Grid[0][1];

    bool isDiag = true;
    bool isOther = firstChar != secondChar;
    if(isOther){
        for(int i=0; i<nSide; i++)
            if(Grid[i][i] != firstChar || Grid[i][(nSide-1)-i] != firstChar){
                isDiag = false;
                break;
            }

        for(int i=0; i<nSide; i++)
            for(int j=0; j<nSide; j++){
                if(i == j || j == nSide-1-i) continue;

                if(Grid[i][j] != secondChar){
                    isOther = false;
                    break;
                }
            }
    }
    if(isDiag && isOther)
        printf("YES\n");
    else
        printf("NO\n");
}