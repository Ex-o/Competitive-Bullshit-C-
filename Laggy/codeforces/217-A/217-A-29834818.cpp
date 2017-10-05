#include "bits/stdc++.h"
using namespace std;

int n;
int cords[1001][1001];
bool v[1001][1001];
int flag = 0;
int min_y = 1e9, min_x = 1e9, max_x = -1, max_y = -1;
void go(int x, int y, int d){
    if(x > max_x || y > max_y || x < min_x || y < min_y) return;
    if(v[x][y]) return;
    
    if(cords[x][y] == -1){
        cords[x][y] = flag;
        v[x][y] = 1; //Intersection you idiot!!
        go(x, y + 1, 0);
        go(x, y - 1, 1);
        go(x + 1, y, 2);
        go(x - 1, y, 3);
    }
    else {
        switch (d) {
            case 0:
                go(x, y + 1, d);
                break;
            case 1:
                go(x, y - 1, d);
                break;
            case 2:
                go(x + 1, y, d);
                break;
            case 3:
                go(x - 1, y, d);
                break;
        }
    }
}
int main(){
    cin >> n;
    vector<pair<int,int>> points;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        cords[x][y] = -1;
        points.push_back({x, y});
        min_x = min(min_x, x);
        min_y = min(min_y, y);
        max_x = max(max_x, x);
        max_y = max(max_y, y);
    }

    for(int i = 0; i < n; i++){
        int x = points[i].first, y = points[i].second;
        if(cords[x][y] == -1){
            flag++;
            go(x, y, 0);
        }
    }

    cout << flag - 1;
}