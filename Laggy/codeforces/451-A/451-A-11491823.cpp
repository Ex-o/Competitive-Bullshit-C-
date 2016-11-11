#include<stdio.h>
#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    int A,B,C=0; scanf("%i%i",&A,&B);

    while(A*B)
    {
        C++;
        A-=1; B-=1;
    }

    if(C%2 == 0)
        cout << "Malvika";
    else
        cout << "Akshat";
}