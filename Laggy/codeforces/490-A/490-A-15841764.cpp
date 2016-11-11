#include <bits/stdc++.h>
using namespace std;


int main ()
{
    int N;
    vector<int> A,B,C;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        int T; scanf("%d",&T);
        if(T == 1) A.push_back(i+1);
        else if(T == 2) B.push_back(i+1);
        else C.push_back(i+1);
    }

    int ans = min(min(A.size(), B.size()),C.size());

    if(!ans){
        printf("0\n");
        return 0;
    }
    printf("%d\n",ans);
    for(int i=0;i <ans; i++)
        printf("%d %d %d\n",A[i],B[i],C[i]);
}