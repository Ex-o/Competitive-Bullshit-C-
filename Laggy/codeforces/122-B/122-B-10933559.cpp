//In the name of Allah>
//God bless this compiler and outputs the right answer>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;


int main()
{
  int n4=0,n7=0;
  string sDigits; cin >> sDigits;
  for(int i = 0 ; i < sDigits.length() ; i++){
    if(sDigits[i] == '4')
        n4++;
    else if(sDigits[i]=='7')
        n7++;
  }
  if(n4 > n7)
    cout << "4";
  else if(n4 < n7)
    cout << "7";
  else if( n4 == n7 &&n4 != 0)
    cout << "4";
  else cout <<"-1";
}