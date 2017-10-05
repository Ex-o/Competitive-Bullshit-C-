#include<bits/stdc++.h>

using namespace std;
string s1,s2;
int lst = 0;
int p = 0;
int r = 0;
void go(int ind, int cur)
{
    if(ind == s2.size()){
        p++;
        if(cur == lst) r++;
        return;
    }
    if(s2[ind] != '?')
        go(ind + 1, cur + (s2[ind] == '+' ? 1 : -1));
    else{
        go(ind + 1, cur + 1);
        go(ind + 1, cur - 1);
    }
}
int main()
{
    cin >> s1 >> s2;
    for(int i = 0 ; i < s1.size() ; i++)
        lst += (s1[i] == '+' ? 1 : -1);

    go(0,0);
    printf("%.12f", r / (double)p);
}