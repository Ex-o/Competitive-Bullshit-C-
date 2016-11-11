#include<bits/stdc++.h>

using namespace std;
int H[1002];
int main()
{
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
        scanf("%d",&H[i]);
    H[N] = 5555;
    H[-1] = 5555;
    int Ans[N][2];
    memset(Ans,0,sizeof(Ans));
    for(int i=0; i< N-1; i++)
    {
        for(int j=i; j<N; j++)
        {
            if(H[j] >= H[j+1])
            {
                for(int k=i; k<j+1; k++)
                    Ans[k][1]++;
            }
            else
            {
                i=j;
                break;
            }
        }
    }
    for(int i= N-1; i>0; i--)
    {
        for(int j=i; j>=0; j--)
        {
            if(H[j] >= H[j-1])
            {
                for(int k=i; k>j-1; k--)
                    Ans[k][1]++;
            }
            else
            {
                i=j;
                break;
            }
        }
    }
//    for(int i=0; i<N; i++)
//    {
//        cout << Ans[i][1] << " ";
//    }
    int nMax = 0;
    for(int i=0; i<N; i++)
        nMax = max(Ans[i][1] + 1,nMax);

    printf("%d",nMax);
}