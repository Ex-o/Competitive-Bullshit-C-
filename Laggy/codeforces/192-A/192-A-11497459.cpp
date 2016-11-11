#include<bits/stdc++.h>
using namespace std;
int N;
bool Check()
{
    for(int i=1; i<sqrt(N*2); i++)
    {
        int A = 2*N-(i*(i+1));
        int B = sqrt(A);
        if((i*(i+1)/2)+(B*(B+1)/2) == N && B!=0)
            return true;
    }
    return false;
}

int main()
{
    scanf("%d",&N);
    if(Check())
        printf("YES");
    else
        printf("NO");
}