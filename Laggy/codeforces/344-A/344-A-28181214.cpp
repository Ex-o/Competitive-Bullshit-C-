#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string m = "";
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        m += s;
    }
    int a = 1;
    for(int i = 1; i < m.size() - 1; i++){
        if(m[i] == m[i + 1])
            a++;
    }
    cout << a;
}