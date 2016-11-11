//In the name of Allah\\

#include <cstdio>
#include<bits/stdc++.h>
#define getchar_unlocked() getchar()
using namespace std;
inline void fastRead_int(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());

    if(c=='-') {
    	neg = 1;
    	c = getchar_unlocked();
    }

    for(; c>47 && c<58 ; c = getchar_unlocked()) {
    	x = (x<<1) + (x<<3) + c - 48;
    }

    if(neg)
    	x = -x;
}

inline void fastRead_string(char *str)
{
    register char c = 0;
    register int i = 0;

    while (c < 33)
        c = getchar_unlocked();

    while (c != '\n') {
        str[i] = c;
        c = getchar_unlocked();
        i = i + 1;
    }

    str[i] = '\0';
}
const char dot = '.';
char str[300001];
int main()
{
    int s_len,n_query,ans=0;
    fastRead_int(s_len);
    fastRead_int(n_query);
    fastRead_string(str);

    for(int i=0; i<s_len; i++){
        if(str[i] == dot && str[i+1] == dot)
            ans++;
    }
    for(int i=0; i<n_query; i++)
    {
        int x; char c[2];
        fastRead_int(x);
        fastRead_string(c);
        x--;
        if(str[x] == c[0]){
            printf("%d\n", ans);
            continue;
        }
        if(str[x] == dot){
                if((str[x-1] == dot && str [x+1] == dot) )
                    ans-=2;
                else if((str[x-1] == dot || str[x+1] == dot))
                    ans--;
        }
        else if(c[0] == dot){
            if((str[x-1] == dot && str [x+1] == dot))
                    ans+=2;
                else if((str[x-1] == dot || str[x+1] == dot))
                    ans++;
        }
        str[x] = c[0];
        printf("%d\n", ans);
    }
}