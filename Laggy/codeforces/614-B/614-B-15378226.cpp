#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int B[N];

    bool isFound = 0;
    string notLucky = "1";
    int TotalZeros = 0;
    while(N--)
    {
        string T; cin >> T;
        string TT = T;
        int Ones = 0;

        if(T == "1") continue;
        else if(T == "0"){
            printf("0");
            return 0;
        }

        if(!isFound)
            for(int i=0; i<T.size(); i++){

                if(T[i] != '0' && T[i] != '1'){
                    isFound = 1;
                    notLucky = T;
                    break;
                }
                else if(T[i] == '1') Ones++;

                if(Ones > 1){
                    isFound = 1;
                    notLucky = T;
                    break;
                }

            }
        if(T != notLucky)
        {
            TotalZeros += T.size() -1;
        }
    }
    //cout << TotalZeros << endl;
    cout << notLucky << string(TotalZeros,'0');
}