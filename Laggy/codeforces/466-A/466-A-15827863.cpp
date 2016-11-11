#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    if(n == 1){
        cout << min (a,b);
        return 0;
    }
    if(m>=n){
        printf("%d",min(b,n*a));
    }
    else
    {
        int ans = 0;
        ans += n/m;
//        if(ans * m == n) printf("%d",ans * b);
//        else {
              int x = min(((n - (ans * m)) * a) + (ans * b),(ans+1) * b);
              ans -- ;
              int f = min(x,((n - (ans * m)) * a) + (ans * b));
              f = min (x,f);
              f = min (f,n*a);
              cout << f;
        //}
    }
}