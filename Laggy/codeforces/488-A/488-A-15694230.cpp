#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int A;
    cin >> A;

    int X = 0;
    while(true){
        ++A;
        ++X;
        stringstream SS;
        SS << A;
        string S = SS.str();

        if(S.find('8') != string::npos){
            printf("%d",X);
            return 0;
        }
        
    }
}