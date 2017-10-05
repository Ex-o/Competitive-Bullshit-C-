#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n , k;
    cin >> n >> k;

    long long y = n / 2 / (k + 1);

    cout << y << " " <<  y * k  << " " << n - ((k + 1) * y);
}