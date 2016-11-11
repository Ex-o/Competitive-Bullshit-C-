#include<bits/stdc++.h>

using namespace std;
int A[1000005];
int P[1000005];
int N;
int main()
{
    scanf("%d",&N);

    for(int i=0; i<N; i++)
            scanf("%d",&A[i]);

    sort(A,A+N);
    if(A[0] == 1)
    {
        cout << -1;
        return 0;
    }
    for(int i=0; i<N; i++)
        P[i] = P[i-1] + A[i];

    for(int i=0; i<1000005; i++)
    {
        for(int j =0; j<N; i++)
            if(i+1 < P[j]){
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}