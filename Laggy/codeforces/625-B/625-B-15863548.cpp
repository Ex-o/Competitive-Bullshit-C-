#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,b;
    cin >> str >> b;
    if(str.find(b) == string::npos){
        cout << 0 << endl;
        return 0;
    }
    int cnt = 0;
    int start = 0;

    while ((start = str.find(b, start)) != string::npos) {
        ++cnt;
        start += b.length();
    }
    cout << cnt;
}