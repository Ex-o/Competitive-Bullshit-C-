#include<bits/stdc++.h>
using namespace std;
int c[26];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    string s;
    cin >> s;
    int l = s.length();
    int d;
    cin >> d;
    int x = l+d;

    for(int i=0; i<26; i++)
        cin >> c[i];

    int z = 0;

    for(int i=1; i<=l; i++)
        z += i*c[s[i-1]-'a'];

    sort(c,c+26);

    for(int i=l+1; i<=x; i++)
        z+= i*c[25];

    cout << z;
}