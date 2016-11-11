//In the name of Allah\\

#include<bits/stdc++.h>
#define mygc(c) (c)=getchar()
#define mypc(c) putchar(c)
using namespace std;
template<typename __ll>
inline void read(__ll &m){__ll x=0,f=1;char ch=getchar();while(!(ch>='0'&&ch<='9')){if(ch=='-')f=-1;ch=getchar();}while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}m=x*f;}
int reader(char c[]){int i,s=0;for(;;){mygc(i);if(i!=' '&&i!='\n'&&i!='\r'&&i!='\t'&&i!=EOF) break;}c[s++]=i;for(;;){mygc(i);if(i==' '||i=='\n'||i=='\r'||i=='\t'||i==EOF) break;c[s++]=i;}c[s]='\0';return s;}
void writer(int x, char c){int s=0,m=0;char f[10];if(x<0)m=1,x=-x;while(x)f[s++]=x%10,x/=10;if(!s)f[s++]=0;if(m)mypc('-');while(s--)mypc(f[s]+'0');mypc(c);}

//###################################################################################################################################################################################################################


int main()
{
    int n,m,d;
    read(n);read(m); read(d);
    int a[n*m +1];
    int l = n*m;
    for(int i=0; i<l; i++) read(a[i]);
    int t = a[0] % d;

    for(int i=0; i<l ;i++)
        if(a[i] % d != t){
        writer(-1,'\n');
        return 0;
    }

    sort(a,a+l);

    const int b = a[l/2];
    int ans =0;

    for(int i=0; i<l ;i++){
        if(a[i] < b)
            ans+= (b-a[i]) /d;
        else if(a[i] > b)
            ans+= (a[i]-b) /d;
    }

    writer(ans,'\n');
}