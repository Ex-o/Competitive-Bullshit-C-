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
vector<vector<int> > v(100003);
vector<vector<int> > ans(100003);
int main()
{
    int n;
    read(n);
    int m = 0;
    for(int i=0; i<n; i++){
        int x; read(x);
        v[x].push_back(i);
        m = max(x,m);
    }
    int num = 0;
    for(int i=0; i<=m; i++){
        int ll = v[i].size();
        //cout << ll << endl;
        if(ll == 0) continue;
        if(ll == 1){
            ans[i].push_back(0);
            num++;
            continue;
        } else if(ll == 2){
            ans[i].push_back(v[i][1]-v[i][0]);
            num++;
            continue;
        }
        int f = v[i][1]-v[i][0];
        bool c = 1;
        for(int j=1; j<ll-1; j++){
            if(v[i][j+1] - v[i][j] != f){
                    c = 0;
                break;
            }
        }
        if(c){
                num++;
            ans[i].push_back(f);
        }
    }
    writer(num,'\n');
    for(int i=0; i<=m; i++)
    {
        int l = ans[i].size();
        if(l){
            writer(i, ' ');
            writer(ans[i][0],'\n');
        }
    }
}