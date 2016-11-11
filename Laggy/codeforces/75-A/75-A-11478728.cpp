#include<stdio.h>
#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<string.h>
#include<sstream>
using namespace std;
string to_string(int n)
{
    stringstream ss; string s;
    ss << n;
    ss >> s;
    return s;
}
int main()
{
    string a,b; cin >> a>>b;
    int X = atoi(a.c_str()) + atoi(b.c_str());
    string F = to_string(X);
    F.erase(remove(F.begin(),F.end(),'0'),F.end());
    a.erase(remove(a.begin(),a.end(),'0'),a.end());
    b.erase(remove(b.begin(),b.end(),'0'),b.end());
    int Z = atoi(a.c_str()) + atoi(b.c_str());
    a = to_string(X = atoi(a.c_str()) + atoi(b.c_str()));

    if(a==F)
        cout << "YES";
    else
        cout << "NO";
}