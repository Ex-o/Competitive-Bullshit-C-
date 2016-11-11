#include<bits/stdc++.h>
using namespace std;

int Arr[1000005];
int main()
{
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
        cin >> Arr[i];

    long long ans = 0;
    for(int i=0; i<N; i++)
        if(Arr[i] < Arr[i-1])
            ans += Arr[i-1] - Arr[i];

    cout << ans;
    return 0;
}