#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int l,r,k;
    cin >> l >> r >> k;

    unsigned long long int curPow = 1;
    bool f = false;
    while(true)
    {

        if(curPow >= l && curPow <= r){
            cout << curPow << " ";
            f = 1;
        }

        if(curPow < 0 || curPow > r || r/curPow < k) break;

         curPow*=k;
    }

    if(!f){
        cout << -1 << endl;
    }
}