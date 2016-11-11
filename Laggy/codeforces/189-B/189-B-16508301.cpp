//Skipped

#include<bits/stdc++.h>
using namespace std;

long long int sum;

int main()
{
    int x,y; cin >> x >> y;
    for(int i=0;i<y-1;i++)
        for(int j=1;j<x;j++)
            sum += min(j,x-j) * ((y-i)/2);
    cout << sum << endl;
    return 0;
}