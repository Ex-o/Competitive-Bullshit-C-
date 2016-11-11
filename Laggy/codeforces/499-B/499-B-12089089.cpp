#include<bits/stdc++.h>
using namespace std;
map<string,string> J;
int main(void)
{
    ios_base::sync_with_stdio(false);
    int N,M;
    cin >> N >> M;

    for(int i=0; i<M; i++){
        string X,Y;
        cin >> X >> Y;
        J[X] = Y;
    }

    for(int i=0; i<N; ++i){
        string Z;
        cin >> Z;
        if(Z.length() <= J[Z].length())
            printf("%s ",Z.c_str());
        else
            printf("%s ",J[Z].c_str());
    }
    printf("\n");
    return 0;
}