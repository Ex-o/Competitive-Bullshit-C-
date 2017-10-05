#include "bits/stdc++.h"
using namespace std;
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}
int main() {
    int a, b;
    cin >> a >> b;
    int mod = max(a, b) % min(a, b);
    int f = 1;
    if (mod != 0) f = 0;
    int c = gcd(a, b);
    set<int> num;
    
    for (int i = 1; i < (int) sqrt(c) + 1; i++) {
        if (c % i == 0 && i*i != c) {
            num.insert(i), num.insert(c / i);
        }

        if (c % i == 0 && i*i == c)
            num.insert(i);
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        int g = 0;
        for (set<int>::reverse_iterator j = num.rbegin(); j != num.rend(); j++) {
            if(*j >= x && y >= *j){
                cout << *j << endl;
                g = 1;
                break;
            }
        }
        if(!g)
            cout << -1 << endl;
    }
}