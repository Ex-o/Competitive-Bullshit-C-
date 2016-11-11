#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    int r,x,y,xx,yy;
    cin >> r >> x >> y >> xx >> yy;

    long long A = x-xx;
    long long B = y-yy;
    A *= A; B *= B;
    double C = sqrt(A+B);

    cout << ceil(C/(2.0*r));
}