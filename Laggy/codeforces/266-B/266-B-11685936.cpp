#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,T; scanf("%d%d",&N,&T);
    string Q;
    cin >> Q;
    while(T)
    {
        for(int i=0; i<N; i++)
            if(Q[i] == 'B' && Q[i+1] == 'G'){
                swap(Q[i],Q[i+1]);
                i++;
            }

            T--;
    }
    cout << Q;
}