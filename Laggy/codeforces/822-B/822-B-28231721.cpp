#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string t, s;

    cin >> t >> s;

    int mi = 100000;
    vector<int> ans;
    for(int i = 0; i < m-n+1; i++){
        int z = 0;
        vector<int> ans2;
        for(int j = 0; j < n; j++){
            if(t[j] != s[i + j]){
                z++;
                ans2.push_back(j);
            }
        }
        if(z < mi){
            mi = z;
            ans = ans2;
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] + 1 << " ";
    }
}