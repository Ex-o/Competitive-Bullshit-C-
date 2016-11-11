#include <bits/stdc++.h>
using namespace std;
int nTime[50005][6];
int nFinish[50005][6];

int checkArr(int i, int j)
{
    if(i < 0 || j < 0)
        return 0;

    return nFinish[i][j];
}
int main()
{
    int nPictures,nPainters;
    cin >> nPictures >> nPainters;

    memset(nTime,0,sizeof(nTime));
    memset(nFinish,0,sizeof(nTime));


    for(int i=0; i<nPictures; i++)
        for(int j=0; j<nPainters; j++)
            cin >> nTime[i][j];


    for(int i=0; i<nPainters; i++)
    {
        if(i!=0)
            nFinish[0][i] = nFinish[0][i-1] + nTime[0][i];
        else
            nFinish[0][i] = nTime[0][i];
    }

    for(int i=1;  i<nPictures; i++)
        for(int j=0; j<nPainters; j++)
        {
            if(checkArr(i-1,j) > nFinish[i][j-1])
                nFinish[i][j] = (checkArr(i-1,j) - checkArr(i,j-1)) + checkArr(i,j-1) + nTime[i][j];

            else
                nFinish[i][j] = checkArr(i,j-1) + nTime[i][j];
        }

    for(int i=0;  i<nPictures; i++){
            cout << nFinish[i][nPainters-1] << " ";

    }
}