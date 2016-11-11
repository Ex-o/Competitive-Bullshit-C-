#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > Edges(105);
bool V[105];
int excluded = 0;
void letshopethisworks(int start, int node, int steps)
{
    //cout << start << " " << node << endl;
    if(node == start && steps != 1){
        if((steps-1) & 1) excluded++;
        return;
    }
    if(V[node]) return;
    V[node] = 1;
    for(int i = 0; i<Edges[node].size(); i++)
        letshopethisworks(start,Edges[node][i], steps+1);
}
int main()
{
    int N,M; scanf("%d%d",&N,&M);

    for(int i=0; i<M; i++){
        int F,T; scanf("%d%d",&F,&T);
        Edges[F].push_back(T); Edges[T].push_back(F);
    }

    for(int i=1; i<=N; i++)
        letshopethisworks(i,i,1);

    printf("%d",excluded + (N - excluded)%2);
    return 0;
}