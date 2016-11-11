#include<bits/stdc++.h>

using namespace std;

int main()
{
    char F[9] = { '1', '2', '3', '4','5','6','7','8','9'};
    int V;
    scanf("%d",&V);
    pair<int,char> N[12];
    pair<char,int> X[12];
    for(int i=0; i<9; i++){
        int T;
        scanf("%d",&T);
        N[i] = make_pair(T,F[i]);
        X[i] = make_pair(F[i],T);
    }
    sort(N,N+9);
    int mn = N[0].first;
    if(mn > V){
        printf("-1");
        return 0;
    }

    int mxLen = V / mn;
    V -= mn * mxLen;

    string ans = string(mxLen,N[0].second);
    sort(X,X+9);
    reverse(X,X+9);

    for(int i=0; i<mxLen; i++)
    {
        V += mn;
        //if(V < mn) break;
        for(int j=0; j<9; j++)
        {
            if(V >= X[j].second){
                ans[i] = X[j].first;
                V-= X[j].second;
                break;
            }
        }
    }
    cout << ans;
}