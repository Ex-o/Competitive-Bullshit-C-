#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int arr[1000000 + 15];
map<ll, vector<int> > pos;
vector<ll> pwsTwo;
map<pair<ll, ll>, bool> used;
void init(){
    pwsTwo.push_back(2);
    for(int i = 1; i < 30; i++)
        pwsTwo.push_back(pwsTwo[i-1] * 2);
}

ll nxtPwTwo(int x){
    for(int i = 0; i < pwsTwo.size(); i++)
        if(pwsTwo[i] > x)
            return i;
    return pwsTwo.size();
}
int main()
{
    init();
    cin >> n;
    ll m = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        pos[arr[i]].push_back(i);
        m = max(m, (ll)arr[i]);
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ll nxt = nxtPwTwo(arr[i]);

        while(nxt < pwsTwo.size()){
            ll req = pwsTwo[nxt] - arr[i];
            if(req > m) break;
            if(pos[req].size()){
                if(!used[{req, arr[i]}] && !used[{arr[i], req}]){
                    ans += (req == arr[i] ? (ll)pos[req].size() * (pos[req].size() - 1) / 2: (pos[req].size() * pos[arr[i]].size()));
                    used[{req, arr[i]}] = 1;
                    used[{arr[i], req}] = 1;
                }
            }
            nxt++;
        }
    }
    cout << ans;
}