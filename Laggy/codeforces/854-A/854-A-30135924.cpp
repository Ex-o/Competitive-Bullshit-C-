#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


int main(){
    int n;
    cin >> n;
    int a = 0, b = 0;
    double fr = 0;
    for(int i = 1; i <= n - 1; i++){
        for(int j = 1; j <= n - 1; j++){
            if(i + j == n && j > i && gcd(i, j) == 1){
                if((double)i/j > fr){
                    a = i, b = j;
                    fr = (double)i/j;
                }
            }
        }
    }
    cout << a << " " << b;
}