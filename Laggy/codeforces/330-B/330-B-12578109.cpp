//In the name of Allah\\

#include<bits/stdc++.h>
#define GetI(x) scanf("%d",&x);
#define Get2I(x,y) scanf("%d%d",&x,&y);
#define FOR(x) for(int i=1; i<=x; i++)
#define FORR(x) for(int j=1; j<=x; j++)
#define nl printf("\n");
using namespace std;
int a[1003];
int main()
{
    int nodes,edges;
    Get2I(nodes,edges);
    memset(a,0,nodes);
    int free_node;
    FOR(edges){
        int s,e;
        Get2I(s,e);
        a[s] = a[e] = 1;
    }

    FOR(nodes){
        if(!a[i]){
            free_node = i;
            break;
        }
    }
    cout << nodes -1 << endl;
    FOR(nodes)
    {
        if(i == free_node) continue;
        cout << free_node << " " << i << endl;
    }
}