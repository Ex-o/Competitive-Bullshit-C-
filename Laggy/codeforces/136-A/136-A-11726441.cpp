#include<bits/stdc++.h>
using namespace std;
int Arr[105]={-1};
int main()
{
    int N; scanf("%d",&N);
    for(int i=0; i<N; i++){
        int temp;
        scanf("%d",&temp);
        Arr[temp] = i+1;
    }
    for(int i=0; i<N; i++)
        printf("%d ",Arr[i+1]);
}