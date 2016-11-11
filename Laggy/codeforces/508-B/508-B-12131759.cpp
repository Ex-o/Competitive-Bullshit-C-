#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    string n; cin >> n;
    int l = n.length();
    int x = -1;
    for(int i=l-1; i>=0; i--)
    {
        if(((n[i] - '0') % 2 == 0) && (n[l-1] > n[i] || x == -1))
            x = i;
    }
    if(x>-1)
    {
        swap(n[l-1],n[x]);
        cout << n;
    }
    else
        cout << -1;
}