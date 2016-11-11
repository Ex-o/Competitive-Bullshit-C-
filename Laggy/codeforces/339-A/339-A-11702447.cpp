#include<bits/stdc++.h>
using namespace std;
int A1=0,A2=0,A3=0;

int main()
{
    string S1,S2;
    cin >> S1;
    for(int i=0; i<S1.size(); i+=2)
        switch(S1[i]){
             case '1': A1++; break;
             case '2': A2++; break;
             case '3': A3++; break;
        }
    while(A1--)
        S2+= "1+";
    while(A2--)
        S2+= "2+";
    while(A3--)
        S2+= "3+";

        S2[S2.size()-1] = '\0';

    printf("%s",S2.c_str());
}