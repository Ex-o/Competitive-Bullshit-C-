//In the name of Allah\\

#include<bits/stdc++.h>
#define mygc(c) (c)=getchar()
#define mypc(c) putchar(c)
using namespace std;
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

//###################################################################################################################################################################################################################
long long x[502];
int main()
{
    x[0] = 1;
    for(int i=1;i<502;i++)
		x[i] = (x[i-1]<<1LL)%1000003;

    char c[101];
    memset(c,'a',sizeof c);
    string f;
    reader(c);

    for(int i=0; i<101; i++)
    {
        switch(c[i])
        {
            case '>': f+= "1000"; break;
            case '<': f+= "1001"; break;
            case '+': f+= "1010"; break;
            case '-': f+= "1011"; break;
            case '.': f+= "1100"; break;
            case ',': f+= "1101"; break;
            case '[': f+= "1110"; break;
            case ']': f+= "1111"; break;
        }
    }
    long long  ans = 0LL;
    int  ll = f.length();
    reverse(f.begin(),f.end());

    for(int i=0;i<ll;i++)
        if(f[i] == '1') ans = (ans + x[i])%1000003;


    writer(ans,'\n');
}