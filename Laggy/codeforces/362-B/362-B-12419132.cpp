#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define FOR(x) for(int i=0; i<x; i++)
int d[3003];

int main()
{
    int n,m; GetI(n) GetI(m)

    FOR(m){
        GetI(d[i])
        if(d[i] == n || d[i] == 1)
            { cout << "NO"; return 0;}
    }
    sort(d,d+m);
    int ans = 1;
    FOR(m){
        if(ans == 3) { cout << "NO"; return 0;}
        if(d[i] == (d[i+1] - 1))
            ans++;
        else ans = 1;
    }
    cout << "YES";
}