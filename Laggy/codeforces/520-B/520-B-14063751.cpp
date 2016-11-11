#include<bits/stdc++.h>
using namespace std;
int dfs(int n, int m)
{
    //cout << n << " " << m << endl;
    if(n == m) return 0;

    if(m < n || (m%2)) {

            return 1+dfs(n,++m);
    }
    else if(m > n) return 1+dfs(n,m/2);
}

int main()
{
     int n,m;
     cin >> n >> m;

    cout << dfs(n,m) << endl;

    return 0;
}