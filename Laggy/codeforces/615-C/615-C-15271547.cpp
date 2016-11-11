#include<bits/stdc++.h>
using namespace std;
string s,t,r;
int isCont(string str)
{
    int A = s.find(str);
    return A;
}
int isContR(string str)
{
    int B = r.find(str);
    return B;
}
vector<pair<int,int> > Ans;
int main()
{
    cin >> s >> t;
    r = s;
    reverse(r.begin(),r.end());
    int strsize = t.length();
    int pushLen = 0;
    for(int i=0; i<strsize; i++)
    {
        string curStr;
        curStr+=t[i];

        //Search normal coating
        pushLen = i+1;
        int f = isCont(curStr);
        int l = f;
        int lPush = 1;
        while(f != -1)
        {
            curStr += t[i+lPush];
            lPush++;
            l = f;
            f = isCont(curStr);
        }
        int lSize = curStr.length()-1;

        //Search reverse
        string curStr_2;
        curStr_2+=t[i];
        int h = isContR(curStr_2);
        int c = h;
        int cPush = 1;
        while (h!=-1)
        {
            curStr_2+=t[i+cPush];
            cPush++;
            c = h;
            h = isContR(curStr_2);
        }

        int cSize = curStr_2.length()-1;
        if(c == -1 && l == -1)
        {
            printf("-1\n");
            return 0;
        }
        if(cSize <= lSize)
            Ans.push_back(make_pair(l+1,l+curStr.size()-1));
        else
            Ans.push_back(make_pair(s.size()-c,(s.size()-c)-(curStr_2.size()-2)));

        i += max(cSize,lSize)-1;
    }
    cout << Ans.size() << endl;
    for(int i=0; i<Ans.size(); i++)
    {
        printf("%d %d\n",Ans[i].first,Ans[i].second);
    }
}