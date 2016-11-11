#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,n;
    scanf("%d%d",&d,&n);

    int a[2005];
    for(int i=0; i<n; i++) scanf("%d",&a[i]);

    int ans = 0;
    for(int i=0; i<n-1; i++){
        if(d == a[i]) continue;

        ans += d - a[i];
    }
    cout << ans;
}