/*
ID: k.m.epv1
LANG: C++
TASK: beads
*/
#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define GetII(x,y) scanf("%d%d",&x,&y);
#define GetIII(x,y,z) scanf("%d%d%d",&x,&y,&z);
#define GetS(x) scanf("%s",&x);
#define FOR(j) for(int i=0; i<j; i++)
#define PB push_back
#define RemoveAll(x,z) x.erase(remove(x.begin(),x.end(),z),x.end());
int P[1005];
bool wayToSort(int i, int j) { return i > j; }
int main()
{
    int A,B,C; GetIII(A,B,C);
    int ans;
    ans = A+(B*C);
    ans = max(ans, A+B+C);
    ans = max(ans,A*(B+C));
    ans = max(ans,A*B*C);
    ans = max(ans,(A+B)*C);
    ans = max(ans,(A*B)+C);
    cout << ans;
}