/*
ID: k.m.epv1
LANG: C++
TASK: beads
*/
#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define GetII(x,y) scanf("%d%d",&x,&y);
#define GetS(x) scanf("%s",&x);
#define FOR(j) for(int i=0; i<j; i++)
#define PB push_back
string B;
int maxBead = 0;
int N;
void NewBead(int P)
{
    int temp=0;
    char st;
    bool f = 0;
    string T="";
    if(P > -1)
    {
        for(int i=P+1; i<N; i++)
            T+=B[i];
        for(int i=0; i<=P; i++)
            T+=B[i];
    }
    else T = B;
    st = T[0];
    int d = -1;
    FOR(N){
        if(st == 'w') st == T[i];
        if(T[i] == st || T[i] == 'w') {
                temp++;
        }
        else {f=1; d = i-1; break;}
    }
    st = T[N-1];
    for(int i=N-1 ;f&& i>=0; i--)
    {
        if(i == d) break;
        if(st == 'w') st = T[i];
        if(T[i] == st || T[i] == 'w'){
                temp++;
        }
        else break;
    }
    maxBead = max(maxBead,temp);
}
int main()
{
    freopen("beads.in","r",stdin); freopen("beads.out","w",stdout);
    GetI(N);
    cin >> B;
    for(int i= -1; i<=N; i++) NewBead(i);
    cout << maxBead << endl ;

}
