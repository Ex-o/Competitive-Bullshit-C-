#include<stdio.h>
#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    int found = 0;
    string s; cin >> s;
    int i = s.find("AB");
    int x = s.find("ABA");
    int d = s.find("BAB");
    int z;
    if(x>=0 || d>=0)
    {
        if(x>=0 && d>=0)
            z=min(x,d);
        else
            z=max(x,d);
        s.erase(z,3);
        if((s.find("AB") >=0 && s.find("AB")<= s.size()) || (s.find("BA") >= 0 &&  s.find("BA")<= s.size()))
            cout << "YES";
        else
            cout << "NO";
    }
    else if(i>=0)
    {
        s.erase(i,2);
        if(s.find("BA") >=0 && s.find("BA")<= s.size())
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
}