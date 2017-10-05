#include "bits/stdc++.h"
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int len = 1 << 30;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        len = min(y - x, len);
    }
    cout << len + 1 << endl;
    for(int i = 0, j = 0; i < n; i++, j++){
        if(j > len) j = 0;
        cout << j << " ";
    }
}