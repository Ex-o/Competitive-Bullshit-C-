#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define FOR(x) for(int i=0; i<x; i++)
bool isOk(string str)
{
    int nLen = str.length();
    int c_Count[256] = {0};
    //memset(c_Count,0,sizeof c_Count);
    for (int i = 0; str[i];  i++)
        c_Count[str[i]]++;

    int odd = 0;
    for (int i = 0; i < 256; i++)
        if (c_Count[i] & 1)
            odd++;

    return (1 >= odd);
}
int main()
{
    string str; cin >> str;

    int nLen = str.length();
    int player = 0;
    FOR(nLen)
    {
        if(isOk(str)){
            if(!(player & 1)) { cout << "First"; return 0;} else {cout << "Second"; return 0;}
        }
        str.erase(1,1);
        //cout << str << endl;
        player++;
    }
}