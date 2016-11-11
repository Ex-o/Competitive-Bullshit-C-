#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
 string fTen[19] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen"} ;
 string mTen[8] = {"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

 int nPut;
 cin >> nPut;
 if(nPut <= 18)
    cout << fTen[nPut];
 else if(nPut < 20 && nPut > 18)
    cout << fTen[nPut%10] + "teen";
 else if(nPut >= 20)
 {
     int nLeft = nPut % 10;
     nPut /= 10;
     int nRight = nPut % 10;
     cout << mTen[nRight-2];
     if(nLeft != 0)
     cout << "-" << fTen[nLeft];
 }
}