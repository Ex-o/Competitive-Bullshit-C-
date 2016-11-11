#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int K,N;
    scanf("%d%d",&K,&N);

    pair<int,int> L[1005];

    for(int i=0; i<K; i++){
        int A; scanf("%d",&A);
        L[i] = make_pair(A,i);
    }
    sort(L,L+K);
    reverse(L,L+K);
    printf("%d\n",L[N-1].first);

    vector<int> Ans;
    for(int i=0; i<N; i++)
        Ans.push_back(L[i].second+1);

    sort(Ans.begin(),Ans.end());

    for(int i=0; i<N; i++)
        printf("%d ",Ans[i]);
}