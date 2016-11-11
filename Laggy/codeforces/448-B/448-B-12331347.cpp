#include<bits/stdc++.h>
using namespace std;
int main()
{
    int SChars[30]={0};
    int TChars[30]={0};
    bool Automate = 0, sArray = 0, flag = 0;

    string S,T;
    cin >> S >> T;
  //---------------------------------------------------------
    if(S.length() < T.length()){
        printf("need tree");
        return 0;
    }
    int A = 0;
    for(int i=0; i<S.length(); i++)
    {
        if(A == T.length()) break;
        if (S[i] == T[A])
            A+=1;
    }

    if(A == T.length()){
            printf("automaton");
            return 0;
        }

    sort(S.begin(),S.end());
    sort(T.begin(),T.end());

    if(S == T)
    {
        printf("array");
        return 0;
    }

    //---------------------------------------------------------

    for(int i=0; i<T.length(); i++) TChars[122-int(T[i])]++;
    for(int i=0; i<S.length(); i++) SChars[122-int(S[i])]++;


    for(int i=0; i<T.length(); i++)
        if(TChars[122-int(T[i])] > SChars[122-int(T[i])]){
            printf("need tree");
            return 0;
    }

    printf("both");
}