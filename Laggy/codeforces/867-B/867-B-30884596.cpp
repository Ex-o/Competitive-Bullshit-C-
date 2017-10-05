#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 1){
        cout << "1 1\n1";
        return 0;
    }

    int x = (n - 1) * 2;
    cout << x << " 2"  << endl;
    cout << "1 2";
}