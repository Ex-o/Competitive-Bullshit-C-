#include<stdio.h>
#include<iostream>
#include<string>
#include<iterator>
using namespace std;

int main()
{
    string A,B,C;
    cin >> A >> B >>C;
    int Arr[30] = {0};
    int Arr1[30] = {0};
    string X= A+B;
    for(int i=0; i<X.size(); i++)
        Arr[X[i]-'A']++;

    for(int i=0; i<C.size(); i++)
        Arr1[C[i]-'A']++;

    if(equal(Arr,Arr+sizeof Arr / sizeof *Arr, Arr1))
        cout<<"YES";
    else
        cout<<"NO";
}