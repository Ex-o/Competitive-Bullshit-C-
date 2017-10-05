#include "bits/stdc++.h"
using namespace std;
#define x first
#define y second
int n;
vector<pair<int,int> > rec;
int main(){
    int a, b;
    cin >> n >> a >> b;

    for(int i = 0; i < n; i++){
        int x,y; cin >> x >> y;
        rec.push_back({x, y});
    }
    int mx = 0;
    for(int i = 0; i < n; i++){

        if((rec[i].x > a || rec[i]. y > b) && (rec[i].y > a || rec[i].x > b)) continue;
        vector<pair<int,int>> good;
        if(rec[i].x <= a && rec[i].y <= b){
            good.push_back({(a - rec[i].x) , b});
            good.push_back({(b - rec[i].y) , a});
        }
        if(rec[i]. y <= a && rec[i].x <= b){
            good.push_back({(a - rec[i].y) , b});
            good.push_back({(b - rec[i].x) , a});
        }
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            int ar = rec[j].x * rec[j].y;

            for(int k = 0; k < good.size(); k++)
                if((rec[j].x <= good[k].x && rec[j].y <= good[k].y) || (rec[j].y <= good[k].x && rec[j].x <= good[k].y)) {
                    if (ar + (rec[i].x * rec[i].y) > mx) {
                        mx = ar + (rec[i].x * rec[i].y);
                    }
                }
        }
    }
    cout << mx;
}