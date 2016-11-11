#include<stdio.h>
#include<iostream>
using namespace std;

int solve(string a, string b)
{
    int c=0,ss=a.size();
    for(int i=0; i<ss; i++)
    {
        if(a[i] == b[i])
            c++;
    }
 return c;
}
int main()
{
    string s,t,p="";
    cin >> s >> t;
    bool r =1;
    for(int i =0; i<s.size(); i++)
    {
        if(s[i] != t[i])
        {
            if(r)
            {
                p+=s[i];
                r=0;
            }
            else
            {
                p+=t[i];
                r=1;
            }
        }
        else
        {
            if(s[i] == '0')
            {
                p+='1';
            }
            else
                p+='0';
        }
    }
    if(solve(s,p) != solve(t,p))
        cout << "impossible";
    else
        cout<<p;
}