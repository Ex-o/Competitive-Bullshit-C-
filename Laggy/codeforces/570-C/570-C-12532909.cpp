//In the name of Allah\\

#include<bits/stdc++.h>
using namespace std;
const char dot = '.';
char str[300001];
int main()
{
    int s_len,n_query,ans=0;
    scanf("%d%d%s",&s_len,&n_query,&str);

    for(int i=0; i<s_len; i++){
        if(str[i] == dot && str[i+1] == dot)
            ans++;
    }
    for(int i=0; i<n_query; i++)
    {
        int x; char c;
        cin >> x >> c;
        x--;
        if(str[x] == c){
            cout << ans << endl;
            continue;
        }
        if(str[x] == dot){
                if((str[x-1] == dot && str [x+1] == dot) )
                    ans-=2;
                else if((str[x-1] == dot || str[x+1] == dot))
                    ans--;
        }
        else if(c == dot){
            if((str[x-1] == dot && str [x+1] == dot))
                    ans+=2;
                else if((str[x-1] == dot || str[x+1] == dot))
                    ans++;
        }
        str[x] = c;
        cout << ans << endl;
    }
}