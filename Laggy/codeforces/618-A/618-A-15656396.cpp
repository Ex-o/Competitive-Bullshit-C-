#include<bits/stdc++.h>
using namespace std;

vector<int> Ans;

int main()
{
    int N;

    int ind = 0;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        Ans.push_back(1);
        for(int j=Ans.size()-1; j>0; --j)
        {
            if(Ans[j] == Ans[j-1]){
                Ans.erase(Ans.begin()+j);
                Ans[j-1] = ++Ans[j-1];
            }
        }
    }

    for(int i=0; i<Ans.size(); i++)
        cout << Ans[i] << " ";
}