#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

void reChars(string &str, char* del)
{
    for ( int i = 0; i < strlen(del); ++i )
    {
        str.erase(remove(str.begin(), str.end(), del[i]), str.end());
    }

}
int main()
{
 string nPut;
 cin >> nPut;
 reChars(nPut,"AOYEUIaoyeui");
for (int i = 0 ; i < nPut.size() ; i++)
{
    cout << "."<<char(tolower(nPut[i]));
}
}