#include<bits/stdc++.h>
using namespace std;

int main()
{
    int S; scanf("%d",&S);

    char G[110][110];

    for(int i=0; i<S; i++)
        for(int j=0; j<S; j++)
            cin >> G[i][j];


    for(int i=0; i<S; i++){
        int ans = 0;
        for(int j=0; j<S; j++){
            if(G[i][j-1] == 'o' && j != 0) ++ans;
            if(G[i][j+1] == 'o' && j != S-1) ++ans;
            if(G[i-1][j] == 'o' && i != 0) ++ans;
            if(G[i+1][j] == 'o' && i != S-1) ++ans;

            if(ans & 1){
                printf("NO");
                return 0;
            }
            ans = 0;
        }
    }

    printf("YES");
}