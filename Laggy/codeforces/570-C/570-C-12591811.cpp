//In the name of Allah\\

#include<bits/stdc++.h>
#define mygc(c) (c)=getchar()
#define mypc(c) putchar(c)
using namespace std;
char c[11];
template<typename __ll>
inline void read(__ll &m)
{
    __ll x=0,f=1;char ch=getchar();
    while(!(ch>='0'&&ch<='9')){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    m=x*f;
}
int reader(char c[]){int i,s=0;for(;;){mygc(i);if(i!=' '&&i!='\n'&&i!='\r'&&i!='\t'&&i!=EOF) break;}c[s++]=i;for(;;){mygc(i);if(i==' '||i=='\n'||i=='\r'||i=='\t'||i==EOF) break;c[s++]=i;}c[s]='\0';return s;}
void writer(int x, char c){int s=0,m=0;char f[10];if(x<0)m=1,x=-x;while(x)f[s++]=x%10,x/=10;if(!s)f[s++]=0;if(m)mypc('-');while(s--)mypc(f[s]+'0');mypc(c);}
const char dot = '.';
char str[300001];
int main()
{
    int s_len,n_query,ans=0;
    read(s_len);
    read(n_query);
    reader(str);

    for(int i=0; i<s_len; i++){
        if(str[i] == dot && str[i+1] == dot)
            ans++;
    }
    for(int i=0; i<n_query; i++)
    {
        int x;
        read(x);
        reader(c);
        x--;
        if(str[x] == c[0]){
            writer(ans,'\n');
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
        writer(ans,'\n');
    }
}