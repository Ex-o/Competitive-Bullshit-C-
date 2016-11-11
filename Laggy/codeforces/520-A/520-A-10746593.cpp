#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

//void reChars(string &str, char* del)
//{
//    for ( int i = 0; i < strlen(del); ++i )
//    {
//        str.erase(remove(str.begin(), str.end(), del[i]), str.end());
//    }
//
//}
int getChar(string str, char ch,int to)
{
   for(int i = 0 ; i < to ; i++)
      if(char(tolower(str[i])) == ch)
          {return 1;break;}
}
int main()
{
   int nCh=0;
   string cCh;
   cin >> nCh >> cCh;
   int tTot=0;
   char* arr = "abcdefghijklmnopqrstuvwxyz";
   for (int i = 0 ; i < 26 ; i++)
   {
       tTot+= getChar(cCh,arr[i],nCh);
   }
   if (tTot == 26)
     cout << "YES";
   else
    cout<< "NO";
}