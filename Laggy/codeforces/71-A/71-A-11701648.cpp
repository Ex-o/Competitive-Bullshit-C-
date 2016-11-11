#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N; scanf("%d",&N);
    while(N--)
    {
        string S; cin >> S;
        if(S.size() > 10)
            cout << S[0] << S.size()-2 << S[S.size()-1] << endl;
        else
            cout << S << endl;
    }
}