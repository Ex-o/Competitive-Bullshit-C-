#include<stdio.h>
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
    int C,cA,cB,R=0; cin >> C >> cA;
    vector<int> sA,sB;
    int i =0,t; //counters
    for(i=0;i<cA;i++)
    {
        cin >> t;
        sA.push_back(t);
    }
    vector<int> sS = sA;
    cin >> cB;
    for(i=0;i<cB;i++)
    {
        cin >> t;
        sB.push_back(t);
    }
    while(sA.size() != 0 && sB.size() != 0)
    {
        if(R>100000)
        {
            cout << "-1";
            return 0;
        }
        R++;
        if(sA[0]>sB[0])
        {
            sA.push_back(sB[0]);
            sA.push_back(sA[0]);
            sA.erase(sA.begin());
            sB.erase(sB.begin());
        }
        else
        {
            sB.push_back(sA[0]);
            sB.push_back(sB[0]);
            sA.erase(sA.begin());
            sB.erase(sB.begin());
        }
    }
    cout << R << " ";
    if(sA.size() == 0)
        cout << "2";
    else
        cout << "1";
}