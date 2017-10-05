#include "bits/stdc++.h"

using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    int A, B;
    cin >> A >> B;

    cout << factorial(min(A,B));
}