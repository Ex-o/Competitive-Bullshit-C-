#include<bits/stdc++.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    bool B[101] = {false};
    for(int i=0; i<n; i++)
    {
        int x; scanf("%d",&x);

        for(int j=0; j<x; j++){
            int t; scanf("%d",&t);
            B[t] = true;
        }
    }

    for(int i=1; i<=m; i++){
        if(!B[i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES");
    return 0;
}