#include <bits/stdc++.h>
using namespace std;
int HighestFactor(int n)
{
    for(int i=2; i<=sqrt(n); i++)
        if(n%i == 0)
           return n/i;

    return 1;
}
int main()
{
    int n;
    cin >> n;
    int ll = HighestFactor(n);
    if(ll!=n) cout << n << " ";
    while(ll != 1)
    {
        cout << ll << " ";
        ll = HighestFactor(ll);
    }
    cout << 1;
}