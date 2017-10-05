#include "bits/stdc++.h"
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);

    long long n, k;
    cin >> n >> k;

    long long rem = n / k;
    if(rem & 1)
        cout << "YES";
    else
        cout << "NO";
}