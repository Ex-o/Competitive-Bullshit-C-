#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

vector<pair<int, int>> q;
int main() {
    int x, t, a, b, d, c;
    cin >> x >> t >> a >> b >> d >> c;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            if((a - (d * i)) + (b - (c * j)) == x || (a - (d * i)) == x || (b - (c * j)) == x || !x){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}