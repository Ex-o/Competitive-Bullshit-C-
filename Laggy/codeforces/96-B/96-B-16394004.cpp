#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int sf = 0, ss = 0, gg = 0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] != '4' && str[i] != '7') {gg = 1; break; }
        if(str[i] == '4') sf++; else ss++;
    }
    if(!gg && sf == ss){
        cout << str << endl;
        return 0;
    }
    bool inc = 0;
    if (str[0] > '7')  str += '0',inc = 1;
    if ((str.size() & 1)) str += '0', inc = 1;
    if(inc){
        cout << string(str.size()/2 ,'4') << string(str.size()/2, '7');
        return 0;
    }
    for(int i=str.size()-1; i>=0; --i)
    {
        string str2 = str;
        int st_point = i;
        int db = 0,dbi = 0;
        if(str2[i] < '4')
        {
            str2[i] = '4';
            db = 1, dbi = i;
        }
        else if( str2[i] < '7')
        {
            str2[i] = '7';
        }
        else
        {
            str2[i] = '4';
            int b = i;
            int stop = 0;
            while(!stop)
            {
                if(b == 0) break;
                if(str2[--b] < '4')
                {
                    str2[b] = '4';
                    stop = 1;
                    st_point = b;
                }
                else if(str2[b] < '7')
                {
                    str2[b] = '7';
                    stop = 1;
                    st_point = b;
                }
                else
                {
                    str2[b] = '4';
                }
            }
            if(!stop)
            {
                cout << string(str.size()/2 +1,'4') << string(str.size()/2 +1, '7');
                return 0;
            }
        }
        //cout << str2 << endl;
        bool cont = 0;
        for(int k = 0; k < 2; k++)
        {
            if(!db && k == 1) continue;
            if(db && k == 1) str2[dbi] = '7';
            bool ok = 1;
            int f = 0, s = 0;
            for(int j=0; j<=st_point; j++)
            {
                if(str2[j] != '4' && str2[j] != '7')
                {
                    ok = 0;
                    break;
                }
                if(str2[j] == '4') f++;
                else s++;
            }
            if(f > str2.size()/2 || s > str2.size()/2 || !ok) continue;
            int ff = str2.size()/2 - f;
            for(int j = st_point +1; j <str2.size(); j++)
            {
                if(ff)
                {
                    str2[j] = '4';
                    ff--;
                }
                else
                    str2[j] = '7';
            }
            cout << str2 << endl;
            cont = 1;
            break;
        }
        if(cont) break;
    }
}