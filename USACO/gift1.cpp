/*
ID: k.m.epv1
LANG: C++
TASK: gift1
*/
#include<bits/stdc++.h>
#define GetI(x) scanf("%d",&x);
#define GetII(x,y) scanf("%d%d",&x,&y);
#define GetS(x) scanf("%s",&x);
#define FOR(j) for(int i=0; i<j; i++)
#define PB push_back
using namespace std;
int main()
{
    freopen("gift1.in","r",stdin); freopen("gift1.out","w",stdout);
    int N; GetI(N);
    vector<string> Names;
    int V[N]; memset(V,0,sizeof V);
    FOR(N){
        string S; cin >> S;
        Names.PB(S);
    }
    FOR(N){
        string C; cin >>C;
        int T,I; GetII(T,I);
        if(!I) continue;
        int D = T/I;
        vector<string>::iterator it = find(Names.begin(),Names.end(),C);
        int Index = it - Names.begin();
        //V[Index] += T;
        FOR(I){
            string TT; cin >> TT;
            V[Index]-= D;
            it = find(Names.begin(),Names.end(),TT);
            int _Index = it - Names.begin();
            V[_Index] += D;
        }
    }
    FOR(N){
        cout << Names[i] << " " << V[i] << endl;
    }
}
