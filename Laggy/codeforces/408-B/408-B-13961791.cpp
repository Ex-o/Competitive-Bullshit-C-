#include <bits/stdc++.h>
using namespace std;

int F[30]={0},T[30]={0};
int main()
{
    string A,B;
    cin >> A >> B;

    for(int i=0; i<A.size(); i++)
        F[ (int)A[i] - 96 ]++;

    for(int i=0; i<B.size(); i++)
        T[ (int)B[i] - 96 ]++;

    int Ans = 0;

    for(int i=0; i<30; i++)
    {
        if(F[i] >= T[i]) Ans+=T[i];
        else if (F[i] < T[i] && F[i] > 0) Ans+=F[i];
        else if(T[i] > 0 && F[i] == 0)
        {
            cout << -1;
            return 0;
        }
    }
    cout << Ans;
}