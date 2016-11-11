#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define GetII(x,y) scanf("%d%d",&x,&y);
#define GetIII(x,y,z) scanf("%d%d%d",&x,&y,&z);
#define GetS(x) scanf("%s",&x);
#define FOR(j) for(int i=2; i<j; ++i)
#define PB push_back
#define RemoveAll(x,z) x.erase(remove(x.begin(),x.end(),z),x.end());
#define IOS ios_base::sync_with_stdio(false);
int main() {

    //IOS
    cin.tie(NULL);
    int N,F,S;
    cin >> N >> F;
    bool n_Cont = 0;
    int P = 0;
    S = F;
    for(int i=1; i<N; i++){
        int b;
        GetI(b);
        if(b < F) {
            if(n_Cont) {
                printf("-1");
                return 0;
            }
            n_Cont = 1;
            P = i;
        }
        F = b;
    }
    if(F > S) {
        if(n_Cont) {
            printf("-1");
            return 0;
        }
    }
    if(!n_Cont)
        printf("0");
    else
        printf("%d",N-P);

}