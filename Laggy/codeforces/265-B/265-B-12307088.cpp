#include<bits/stdc++.h>
using namespace std;
int H[100007];
int main()
{
    int N; cin >> N;

    int ans=0;

    for(int i=0; i<N; i++)
        cin >> H[i];
    ans += N + H[0];
    int cur_H = H[0];
    for(int i=1; i<N; i++)
    {
        if(H[i] > cur_H){
            ans += H[i] - cur_H +1;
            cur_H = H[i];
        }
        else if(H[i] < cur_H){
            ans += cur_H - H[i] +1;
            cur_H = H[i];
        }
        else
            ans++;
    }
    cout << ans;
}