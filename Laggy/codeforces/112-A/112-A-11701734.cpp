#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S1,S2;
    cin >> S1 >> S2;

    for(int i=0; i<S1.size(); i++){
        if(tolower(S1[i]) > tolower(S2[i])){
            printf("1"); return 0;
        }
        else if(tolower(S1[i]) < tolower(S2[i])){
            printf("-1"); return 0;
        }
    }
    printf("0"); return 0;
}