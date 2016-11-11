#include<bits/stdc++.h>
using namespace std;
#define For(x) for(int i=0; i<x; i++)

#define MAXN 100003

int NEW[MAXN];
struct predicate
{
    bool operator ()( const std::pair<int, int> &left, const std::pair<int, int> &right ) const
    {
        return ( left.second > right.second ||
               ( !( right.second > left.second ) && left.first < right.first ) );
    }
};
int main()
{
    int n_Dancers,n_Dances;
    cin >> n_Dancers >> n_Dances;
    memset(NEW,0,sizeof(NEW));
    For(n_Dances)
    {
        int X[3];
        cin >> X[0] >> X[1] >> X[2];
        bool USED[4] = {false};

        for(int j=0; j<3; j++){
            if(NEW[X[j]]) USED[j] = 1;
        }
        int k = 1;
        int f[3] = {0};
        memset(f,0,sizeof (f));

        vector<pair<int,int> > pTw(3);
        pTw[0] = pair<int,int> (X[0],USED[0]);
        pTw[1] = pair<int,int> (X[1],USED[1]);
        pTw[2] = pair<int,int> (X[2],USED[2]);

        sort(pTw.begin(),pTw.end(), predicate());

        for(int j=0; j<3; j++) X[j] = pTw[j].first;
        for(int j=0; j<3; j++) USED[j] = pTw[j].second;
//        for(int x=0; x<3; x++)
//                cout << pTw[x].first  << " ";
//            cout << endl;
        for(int j=0; j<3; j++)
        {
            while(k == NEW[X[j]])
                k++;

            if(j==2)
            {

                for(int x=0; x<3; x++)
                   if(!f[x]){
                        k=x+1;
                        break;
                    }
            }

            if(!USED[j]){
                NEW[X[j]] = k;
                f[k-1] = 1;
                USED[j] = 1;
                k++;
            }
            else
                f[NEW[X[j]]-1] = 1;
        }
    }
    //sort(NEW,NEW+n_Dancers+1);
    for(int i=1; i<=n_Dancers; i++)
        cout << NEW[i] << " " ;
}