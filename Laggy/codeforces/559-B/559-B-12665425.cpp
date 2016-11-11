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

char A[200002],B[200002];
bool Answer(int f_Start,int s_Start, int c_Len)
{
    if(c_Len == 1){
        if(A[f_Start] == B[s_Start])
            return true;
        else return false;
    }

    bool isEqual = 1;

    for(int i=0; i<c_Len; i++){
        if(A[f_Start +i] != B[s_Start +i]){
            isEqual = 0;
            break;
        }
    }


    if(isEqual)
       return true;


    if(c_Len % 2 == 1) return false;

        int n_Len = c_Len / 2;

        if( (Answer(f_Start,s_Start+n_Len,n_Len) && Answer(f_Start+n_Len,s_Start,n_Len) )|| (Answer(f_Start,s_Start,n_Len) && Answer(f_Start+n_Len,s_Start+n_Len,n_Len)))
            return true;
        else return false;

}
int main()
{
    ios_base::sync_with_stdio(false);
    int n_Len = reader(A);
    reader(B);

    int f = 1;
    for(int i=0; i<n_Len; i++){
        if(A[i] != B[i]){
            f = 0;
            break;
        }
    }
    if(f){
        cout << "YES";
        return 0;
    }

        if(n_Len%2 == 1){
        cout << "NO";
        return 0;
    }

    int h_Len = n_Len/2;

    if((Answer(0,h_Len,h_Len) && Answer(h_Len,0,h_Len)) || (Answer(h_Len,h_Len,h_Len) && Answer(0,0,h_Len)))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}