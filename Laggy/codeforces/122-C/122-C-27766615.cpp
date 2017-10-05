#include<bits/stdc++.h>

using namespace std;
long long l,r;
vector<long long> lky;
void go(long long x)
{
    if(x > 1000000001) return;
    lky.push_back(x);
    go(x*10 + 4);
    go(x*10 + 7);
}

long long nxt(long long x)
{
    long long lft = 0 ,rt = lky.size() - 1;

    while(lft <= rt)
    {
        int mid = (rt + lft)/2;
        //cout << lky[mid] << " " << mid << " " << lft << " " << rt << endl;
        if(lky[mid] == x) return lky[mid];
        if(lky[mid] > x){
            if((mid > 0 ? lky[mid - 1] : 0) < x) return lky[mid];
            rt = mid - 1;
        }
        else if(lky[mid] < x){
            lft = mid + 1;
        }
    }
    return 0;
}
int main(){
    cin >> l >> r;
    go(4);
    go(7);
    sort(lky.begin(), lky.end());
    lky.push_back(4444444444);

    long long lst = nxt(l);
    long long ans = 0;
    while(l <= r){

        if(r < lst){
            ans += (r - l + 1) * lst;
            break;
        }
        else{
            ans += (lst - l + 1) * lst;
            l = lst + 1;
            lst = nxt(l);
        }

    }

    cout << ans;
}