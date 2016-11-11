#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>  R,W,M;
    string C;

    int n;
    scanf("%d",&n);
    while(n--)
    {
        string A,B;
        cin >> A >> B;

           if(B == "rat") R.push_back(A);
            else if(B == "woman") W.push_back(A);
             else if(B == "child") W.push_back(A);
              else if(B == "man") M.push_back(A);
               else if(B == "captain") C = A;
    }

    for(int i=0; i<R.size(); i++)
        cout << R[i] << endl;

    for(int i=0; i<W.size(); i++)
        cout << W[i] << endl;

    for(int i=0; i<M.size(); i++)
        cout << M[i] << endl;

        cout << C;
}