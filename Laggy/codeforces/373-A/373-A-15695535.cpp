#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int H[11] = {0};
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++){
            char T;
            cin >> T;
            if(T != '.')
            H[T - '0']++;
        }

    for(int i=1; i<=9; i++){
        if(H[i] > N*2){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}