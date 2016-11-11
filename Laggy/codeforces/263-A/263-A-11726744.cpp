#include<bits/stdc++.h>
using namespace std;
int G[5][5];
int ans;
int main()
{
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++){
                scanf("%d",&G[i][j]);
                if(G[i][j] == 1){
                   ans = abs(3-(i+1)) + abs (3-(j+1));
                }
        }
    printf("%d",ans);
}