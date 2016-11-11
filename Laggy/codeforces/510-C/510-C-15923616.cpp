//Dafuq?
#include<bits/stdc++.h>
using namespace std;
string names[101];
vector<int> ans;
vector<int> adj[256];
vector<int> starts;
set<int> alp;

bool chars[256];
bool V[256];
int Nodes = 0;
set<int> Nodess;

void dfs_topo(int X)
{
    if(V[X]) return;
    V[X] = 1;

    for(int i=0; i<adj[X].size(); i++)
        dfs_topo(adj[X][i]);

    ans.push_back(X);
}
bool isCyclic(int node, bool visited[], bool incyle[])
{
    if(visited[node] == false)
    {
        visited[node] = true;
        incyle[node] = true;

        for(int i=0; i<adj[ node ].size(); ++i)
        {
            if ( !visited[ adj[node][i] ] && isCyclic(adj[node][i], visited, incyle) )
                return true;
            else if (incyle[ adj[node][i] ])
                return true;
        }
    }
    incyle[node] = false;
    return false;
}

bool InitCycle()
{

    bool visited[256];
    bool incycle[256];
    memset(visited,0,sizeof(visited));
    memset(incycle,0,sizeof(incycle));

    for(set<int>::iterator i = alp.begin(); i!=alp.end(); i++)
        if(isCyclic(*i, visited,incycle))
            return true;

    return false;
}
int main()
{
    int N; cin >> N;

    for(int i=0; i<N; i++){
        cin >> names[i];
    }

    for(int i=0; i<N-1; i++)
    {
        bool Valid = 0;
        for(int z=0; z<min(names[i].size(),names[i+1].size()); z++)
        {
            if(names[i][z] == names[i+1][z]) continue;
            adj[ names[i][z] ].push_back( names[i+1][z] );
            Valid = 1;
            alp.insert(names[i][z]);
            alp.insert(names[i+1][z]);
            break;
        }
        if(!Valid && names[i].size() > names[i+1].size()){
            cout << "Impossible";
            return 0;
        }
    }
    Nodes = alp.size();
    bool X = InitCycle();
    if(X){
        cout << "Impossible";
        return 0;
    }
    for(int i=97; i<123; i++)
        for(int j=0; j < adj[i].size(); j++)
            chars[ adj[i][j] ] = 1;


    for(set<int>::iterator i = alp.begin(); i!=alp.end(); i++)
        if(!chars[*i]) starts.push_back(*i);

    for(int i=0; i<starts.size(); i++){
        if(!V[i]) dfs_topo(starts[i]);
    }
    reverse(ans.begin(), ans.end());
    set<int> gg;
    for(int i=0; i<ans.size(); i++){
        gg.insert(ans[i]);
        cout << (char)ans[i];
    }

    for(int i=97; i<123; i++)
        if(!gg.count(i)) cout << (char)i;
}