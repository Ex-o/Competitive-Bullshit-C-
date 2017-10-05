#include <bits/stdc++.h>
using namespace std;
vector<tuple<int, int, int> > se;
vector<string> str;
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    int m = 0;
    for(int i = 0; i < n; i++){
        string s; int occ;
        cin >> s >> occ;
        for(int j = 0; j < occ; j++){
            int pos; cin >> pos;
            m = max(m, pos + (int)s.size() - 1);
            se.emplace_back(pos, pos + (int)s.size() - 1, i);
        }
        str.push_back(s);
    }

    sort(se.begin(), se.end());

    int l = 1;

    string ans(m, 'a');
    //for(int i = 1; i <= m; i++) ans += "0";

    for(auto const& t: se){
        int ll , r, idx;
        tie(ll, r, idx) = t;
        if(r < l) continue;

            int x = r;
            int y = str[idx].size();
            for(int j = max(ll, l); j <= x; j++){
                ans[j] = str[idx][j - ll];
            }
            l = r;

            /*
        else{
            int x = se[i].first.second;
            int y = str[se[i].second].size();
            for(int j = se[i].first.first; j <= x; j++){
                l = j;
                ans[j] = str[se[i].second][abs(x - j - y + 1)];
            }
        }
             */
    }

    for(int i = 1; i <= m; i++)
        cout << ans[i];

}