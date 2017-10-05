#include <bits/stdc++.h>
using namespace std;
int H[1005];
int main()
{
    int n,h;
    scanf("%d%d",&n,&h);

    for(int i=0; i<n; i++) scanf("%d",&H[i]);

    int ans = n;
    for(int i=0; i<n; i++)
    {
        if(H[i] > h)
            ans++;
    }
    cout << ans;
}