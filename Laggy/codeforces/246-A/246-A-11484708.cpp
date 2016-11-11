#include<stdio.h>
#include<iostream>
#include<string>
#include<iterator>
using namespace std;

int main()
{
    int N; cin >> N;
    int Arr[N];
    for(int i=0; i<N; i++)
    {
        if(N-1 <= 1){cout << "-1"; break;}
        if(i<N)
        {
            cout << N-i << " ";
        }

    }
}