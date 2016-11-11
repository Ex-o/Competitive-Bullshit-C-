#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N; scanf("%d",&N); int Coins[N];
    int Sum=0;
    for(int i=0; i<N; i++)
    {
        scanf("%d",&Coins[i]);
        Sum+=Coins[i];
    }
    int temp=0;
    int out=0;
    sort(Coins,Coins+N);
    for(int i=N-1; i>=-1; i--)
    {
        if(temp <= Sum-temp)
        {
            temp += Coins[i];
            out++;
        }
        else
        {
            cout << out << endl;
            break;
        }
    }
}