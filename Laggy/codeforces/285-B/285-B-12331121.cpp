#include<bits/stdc++.h>
using namespace std;
int P[100003];
int n,s,t;
int V[100003];
int main()
{

    scanf("%d%d%d",&n,&s,&t);
    memset(V,0,sizeof V);

    int i=0;
    int c_Pos = s-1;

    for(i=0; i<n; i++) scanf("%d",&P[i]);
    int ans = 0;
    while(true)
    {
        if(c_Pos == t-1){
            printf("%d",ans);
            return 0;
        }
        if(V[c_Pos] == 1){
            printf("-1");
            return 0;
        }

        V[c_Pos] = 1;
        c_Pos = P[c_Pos]-1;
        ans++;
    }
}