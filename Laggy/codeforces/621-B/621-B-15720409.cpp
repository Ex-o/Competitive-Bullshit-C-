#include<bits/stdc++.h>

using namespace std;

char G[1005][1005];
int D[200001*4];

int main()
{
    int N;
    scanf("%d",&N);
    memset(G,'.',sizeof(G));
    int C = 1;

    while(N--){
        int T,TT;
        cin >> T >> TT;
        G[T][TT] = 'x';
    }

    for(int i = 999; i>=1; --i)
    {
        int A = i, B = 1;
        while(true){
            if(B > 1000 || A > 1000) break;

            if(G[A][B] == 'x')
                    D[C]++;
            A++; B++;
        }
        C++;
    }

    for(int i=1; i<=999 ;i++)
    {
        int A = i, B = 1000;
        while(true){
            if(B < 0 || A > 1000) break;
            if(G[A][B] == 'x'){
                    D[C]++;
            }
            A++; B--;
        }
        C++;
    }
    for(int i=2; i<=999; i++)
    {
        int A = 1, B = i;
        while(true){
            if(B > 1000 || A > 1000) break;
            if(G[A][B] == 'x')
                D[C]++;
            A++; B++;
        }
        C++;
        A = 1,B = i;
        while(true){
            if(A > 1000 || B < 0) break;

            if(G[A][B] == 'x') D[C]++;

            A++; B--;
        }
        C++;
    }
    int Ans = 0;

    for(int i=1; i<200001*4; i++){
        if(D[i] > 1)
            Ans += (D[i] * ( D[i] - 1)) / 2;
    }

    cout << Ans;
}