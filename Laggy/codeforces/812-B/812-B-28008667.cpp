#include <bits/stdc++.h>

using namespace std;
int n,m;
bool g[16][101];

int getLeft(int f){

    int r = m + 1;
    for(int i = m; i > 0; i--)
        if(g[f][i]) r = i;

    return r;
}

int getRight(int f){
    int r = 0;
    for(int i = 1; i < m + 1; i++)
        if(g[f][i]) r = i;

    return r;
}
int go(int r , int f)
{
    if(f >= n - 1){
        if(r == 0)
            return getRight(max(n - 1, 0));

        return m + 1 - getLeft(n - 1);
    }

    if(r == 0) {
        int x = min(2 * getRight(f) + go(0, f + 1), m + 1 + go(m + 1, f + 1));
        return (x > 0 ? x + 1 : x);
    }
    int x =  min(2 * ( (m + 1) - getLeft(f) ) + go(m + 1, f + 1), m + 1 + go(0, f + 1));
    return (x > 0 ? x + 1 : x);
}
int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < m + 2; j++)
            g[n-i-1][j] = !(s[j] - '1');
    }
    int l = n - 1;
    for(int i = l; i >= 0; i--){
        bool k = 1;
        for(int j = 0; j < m + 2; j++)
            if(g[i][j] == 1) k =0;

        if(k) n--;
        else break;
    }
    cout << go(0,0);
}