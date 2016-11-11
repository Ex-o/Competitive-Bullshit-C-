#include<bits/stdc++.h>
using namespace std;

map<int,int> O;

int H[27];

int main()
{
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
        scanf("%d",&H[i]);

    long long ans = 0;
    for(int i=0; i<N; i++)
    {
        if(O[H[i]] == 0){
            ans+=H[i];
            O[H[i]] = 1;
        }
        else
        {
            while(H[i])
            {
                if(O[--H[i]] == 0){
                    ans+=H[i];
                    O[H[i]] = 1;
                    break;
                }
            }
        }
    }
    cout << ans;
}