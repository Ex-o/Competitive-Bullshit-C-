#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int occ[1005];
    memset(occ, 0, sizeof(occ));
    for(int i = 0; i<n; i++){
        int t; cin >> t;
        occ[t]++;
    }

    vector<int> dist;
    for(int i=0; i<1001; i++)
        if(occ[i] != 0)
            dist.push_back(occ[i]);

    sort(dist.begin(), dist.end());

    int ans = 0;
    int el = dist.size();
    int used = 0;
    for(int i = 0; i<dist.size(); i++){
        if(dist[i] - used == 0){
                el--;
                continue;
        }
        ans += (el - 1) * (dist[i] - used);
        el--;
        used = dist[i];
    }
    cout << ans;
}