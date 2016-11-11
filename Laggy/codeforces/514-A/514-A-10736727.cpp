#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <set>
using namespace std;

int main()
{
   string nPut;
   cin >> nPut;

       for (int i = 0 ; i < nPut.size() ; i++)
       {
           if(nPut[i] >= 53)
           {
               if(i==0 && nPut[i] == 57)
                cout << nPut[i];
               else
               cout << 57-(nPut[i]);
           }
           else cout << nPut[i];
       }

}