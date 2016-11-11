/*
ID: k.m.epv1
LANG: C++
TASK: ride
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ride.in","r",stdin); freopen("ride.out","w",stdout);
    string S1,S2; cin >> S1 >> S2;
    int C1=1,C2=1;
    for(int i=0; i<S1.size(); i++)
        C1 *= S1[i] - 64;
    for(int i=0; i<S2.size(); i++)
        C2 *= S2[i] - 64;

    if(C1%47 == C2%47)
        printf("GO\n");
    else
        printf("STAY\n");
}
