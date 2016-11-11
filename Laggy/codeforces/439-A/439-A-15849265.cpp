#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,T,S=0;
    cin >> N >> T;

    int A[105];
    for(int i=0; i<N; i++){
            cin >> A[i];
            S+=A[i];
    }

    if(S + ((N-1) * 10) > T){
        cout << -1 << endl;
        return 0;
    }
    else
    {
        cout << ((N-1) * 10)/5 + (T - (S + ((N-1) * 10)))/5;
    }

}