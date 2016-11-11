#include<bits/stdc++.h>
using namespace std;
long long C[100005];
int main()
{
    int N; scanf("%d",&N);
    int i = 0;

    for(i=0; i<N; i++) scanf("%I64d",&C[i]);

    for(i=0; i<N; i++){
        if(i==0){
            cout << min(C[N-1] - C[i],C[1] - C[0]) << " ";
            cout << max(C[N-1] - C[i],C[1] - C[0]) << endl;
        }
        else if(i == N-1){
            cout << min(C[i] - C[0],C[i] - C[i-1]) << " ";
            cout << max(C[i] - C[0],C[i] - C[i-1]) << endl;
        }
        else
            cout  << min(C[i+1] - C[i],C[i]-C[i-1]) << " " << max(C[N-1] - C[i],C[i] - C[0]) << endl;
    }

}