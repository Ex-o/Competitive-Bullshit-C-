#include<bits/stdc++.h>
using namespace std;
int Arr[102];
int main()
{
    int N; scanf("%d",&N);
    int minSol=999999,maxSol=0,minIndex=0,maxIndex=0;
    for(int i=0; i<N; i++){
        int T; scanf("%d",&T);
        if(T > maxSol){
            maxSol = T;
            maxIndex = i+1;
        }
        if(T <= minSol){
            minSol = T;
            minIndex = i+1;
        }
    }
    if(minIndex < maxIndex)
        maxIndex--;

    cout << abs(1-maxIndex) + abs(N-minIndex);
}