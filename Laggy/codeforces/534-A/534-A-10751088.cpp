#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> getEven(int limit)
{
    vector<int> st;
    for(int i = 0 ; i < limit-1 ; i+=2)
    {
      st.push_back(i+2);
    }
    return st;
}
vector<int> getOdd(int limit)
{
    vector<int> st;
    for(int i = 1 ; i < limit-1 ; i+=2)
    {
        if(i == 1 && i+2 < limit)
        st.push_back(1);

      st.push_back(i+2);
    }

return st;
}
int main()
{
    int nPut;
    cin >> nPut;
    vector<int> odd; odd = getOdd(nPut);
    vector<int> even ; even= getEven(nPut);
    int ii=0;
    int sz = odd.size();
    if(nPut > 3)
   {
       cout << nPut <<endl;
    for(int i = 0 ; i < sz; i++)
    {
        if(ii==0)
           cout << odd[(sz-1)-i] <<" " ;
        else
            cout << even[(sz-1)-i] << " " ;

        if(i==odd.size()-1 && ii==0)
        {
            i= -1;
            ii = -1;
            sz = even.size();
        }
    }
   }
   else
   {
       switch (nPut)
       {
           case 1: cout << "1\n1"; break;
           case 2: cout << "1\n1"; break;
           case 3: cout << "2\n1 3"; break;
       }
   }
}