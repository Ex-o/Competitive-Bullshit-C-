#include<bits/stdc++.h>
using namespace std;
string s,t,r;
vector<pair<int,int> > Ans;

int isCont(string str)
{
    return s.find(str);
}
int isContR(string str)
{
    return r.find(str);
}
int main()
{
    cin >> s >> t;
    r = s;
    reverse(r.begin(),r.end());
    int strsize = t.length();

    for(int i=0; i<strsize; i++)
    {
        string curStr;
        curStr+=t[i];

        int f = isCont(curStr);
        int l = f;
        int lPush = 1;

        while(f != -1){
            curStr += t[i+lPush];
            lPush++;
            l = f;
            f = isCont(curStr);
        }
        int lSize = curStr.length()-1;

        string curStr_2;
        curStr_2 += t[i];

        int h = isContR(curStr_2);
        int c = h;
        int cPush = 1;

        while (h!=-1){
            curStr_2+=t[i+cPush];
            cPush++;
            c = h;
            h = isContR(curStr_2);
        }

        int cSize = curStr_2.length()-1;

        if(c == -1 && l == -1){
            printf("-1\n");
            return 0;
        }
        if(cSize <= lSize)
            Ans.push_back(make_pair(l+1,l+curStr.size()-1));
        else
            Ans.push_back(make_pair(s.size()-c,(s.size()-c)-(curStr_2.size()-2)));

        i += max(cSize,lSize)-1;
    }

    int sz = Ans.size();
    printf("%d\n",sz);

    for(int i=0; i<sz; i++)
        printf("%d %d\n",Ans[i].first,Ans[i].second);
}