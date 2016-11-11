#include<bits/stdc++.h>
using namespace std;
int main()
{
    int P[6];
    for(int i=0; i<6; i++)
        scanf("%d",&P[i]);
    int N;
    scanf("%d",&N);
    int Cups = P[0] + P[1] + P[2];
    int Medals = P[3] + P[4] + P[5];

    if(ceil(Cups/5.0) + ceil(Medals/10.0) <= N)
        printf("YES");
    else
        printf("NO");
}