#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int found = -1;
    long long l = 0 , r = 0;
    vector<pair<int,int> > rr,ll;

    for(int i=0; i<str.length(); i++){
        if(str[i] == '^'){
            found = i+1;
            continue;
        }
        if(str[i] != '=')
            found == -1 ? ll.push_back(make_pair(i+1,str[i])) : rr.push_back(make_pair(i+1,str[i]));
    }


    for(int i=0;  i<ll.size(); i++)
        l += (found - ll[i].first) * (ll[i].second - '0');

    for(int i=0;  i<rr.size(); i++)
        r += (rr[i].first  - found) * (rr[i].second - '0');

    if(l == r)
        printf("balance");
    else if(l>r)
        printf("left");
    else
        printf("right");
}