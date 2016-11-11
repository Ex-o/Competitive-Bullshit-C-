#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X; scanf("%d",&X);
    double Y = X/10;
    double Z = (X/100)*10 + (X%10);

    printf("%d",max(max(X,(int) Y),(int)Z));
}