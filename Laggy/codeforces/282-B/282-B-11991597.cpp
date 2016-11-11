#include<bits/stdc++.h>
using namespace std;
int x,y;
int main(){
    long long int A=0,G=0;
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d%d",&x,&y);

        if(abs(A+x-G)<=500)
        {
            A+=x;
            printf("A");
        }
        else
        {
            G+=y;
            printf("G");
        }
    }
    return 0;
}