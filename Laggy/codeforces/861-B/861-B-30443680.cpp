#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef long double ld;
vector<set<int>> b(200);
int main(){
    int n, m;
    cin >> n >> m;
    double f = n;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        b[y].insert(x);
    }
    set<int> ans;
    for(int i = 1; i < 101; i++){
        bool f = 1;
        for(int j = 0; j < b.size(); j++){
            if(!b[j].size()) continue;

            for(set<int>::iterator it = b[j].begin(); it != b[j].end(); it++){
                if(ceil(*it / (double)i) != j) {
                    f = 0;
                    break;
                }
            }
            if(!f) break;
        }
        if(f){
            ans.insert(ceil(n / (double)i));
        }
    }
    if(ans.size() > 1) cout << -1;
    else{
        set<int>::iterator it = ans.begin();
        cout << *it;
    }
}