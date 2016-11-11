#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N; scanf("%d",&N);
    if(N%2 == 0 && N!= 2)
    {
        if(N/2 * 2 == N)
            printf("YES");
        else
            printf("NO");
    }
    else
        printf("NO");
}