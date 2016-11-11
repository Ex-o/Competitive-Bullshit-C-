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
#define RemoveAll(x,z) x.erase(remove(x.begin(),x.end(),z),x.end());
int main()
{
    string S,T; cin >>S;
    FOR(S.size())
    {
        if((S[i] == 'W' && S[i+1]=='U' && S[i+2] =='B'))
        {
            i+=2;
            if(T.size() != 0  && T[T.size()-1] != ' ' ) T += " ";
        }
        else
            T+=S[i];
    }
    printf("%s",T.c_str());
}