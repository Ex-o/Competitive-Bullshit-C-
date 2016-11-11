//In the name of Allah>
//God bless this compiler and outputs the right answer>
#include<iostream>
#include<math.h>
using namespace std;

bool isLucky(int i)
{
    int arr[] = {4,44,444,7,77,777,47,74,447,474,477,744,747,774};
    for(int a = 0 ; a < 14 ; a++){
        if(i%arr[a] == 0)
            return true;
    }
 return false;
}
int main()
{
   int iNumber = 0; cin >> iNumber;
   if(isLucky(iNumber))
    cout <<"YES";
   else
    cout <<"NO";
}