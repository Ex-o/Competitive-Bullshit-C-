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
 long long A[100005],B[100005];
int main()
{
    int l1,l2,k,m;
    read(l1); read(l2); read(k); read(m);

    for(int i=0; i<l1; i++) read(A[i]);

    for(int i=0; i<l2; i++) read(B[i]);

    long long t = A[k-1];
    int in = l2;

    for(int i=0; i<l2; i++)
        if(B[i] > t){
            in = i;
            break;
        }
    if(l2 - in >= m)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}