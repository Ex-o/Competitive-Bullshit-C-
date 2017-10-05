#include "bits/stdc++.h"
using namespace std;
typedef long double lld;
vector<pair<lld,int>> cords;
lld dist(lld x1, lld y1, lld x2, lld y2){
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    int n, k;
    cin >> n >> k;

    for(int i = 0 ; i < n; i++){
        int x, y, ki;
        cin >> x >> y >> ki;
        lld d = dist(0,0,x,y);
        cords.push_back({d, -ki});
    }
    sort(cords.begin(), cords.end());

    for(int i = 0; i < cords.size(); i++){
        k += -cords[i].second;
        if(k >= 1000000){
            cout << setprecision(7) << cords[i].first;
            return 0;
        }
    }
    cout << -1 << endl;
}