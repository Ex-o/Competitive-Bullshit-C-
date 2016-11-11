#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long N,K;
    long long cnt = 1;
    cin >> N >> K;
    long long o = 0;
    if((N & 1)) o = N/2 + 1; else o = N/2;

    if(K <= o)
        cout << 1 + ((K-1)*2);
    else {
        cnt = K - o;
        cout << 2 + ((cnt-1)*2);
    }
}