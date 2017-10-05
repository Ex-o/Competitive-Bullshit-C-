#include<bits/stdc++.h>

using namespace std;
map<string, int> m;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        m[s]++;
    }

    cout << (m["X++"] + m["++X"] - m["--X"] - m["X--"]);
}