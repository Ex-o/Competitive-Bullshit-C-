#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define FOR(x) for(int i=0; i<x; i++)
int H[100005] ={0};
int G[100005]={0};
int V[100005]={0};
int main()
{
    int N; GetI(N);
    FOR(N){
        GetI(H[i]) GetI(G[i])
        V[H[i]]++;
    }

    FOR(N){
        int X = (N-1) + V[G[i]];
        cout << X << " " << (2*(N-1)) - X << endl;
    }
}