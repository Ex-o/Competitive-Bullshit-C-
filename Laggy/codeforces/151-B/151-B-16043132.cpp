#include<bits/stdc++.h>
#define REP(a,b) for(int i=a; i<b; i++)
using namespace std;

int N;
string F[105];
vector< pair<int,int> > T;
vector< pair<int,int> > P;
vector< pair<int,int> > G;
int Type(string arr)
{
    char V = arr[0];
    bool R = 0, E = 0;
    for(int i=0; i<8 && !R; i++){
        if(arr[i] == '-') continue;
        if ( arr[i] != V ) R = 1;
    }

    if(!R)
        return 1;

    for(int i=0; i<7 && !E; i++){
        if(arr[i] == '-') continue;
        if(arr[i+1] == '-'){
            if(arr[i] <= arr[i+2]) E = 1;
            continue;
        }
        if(arr[i] <= arr[i+1]) E = 1;
    }

    if(!E) return 2;

    return 3;
}
void Init()
{
    scanf("%d",&N);

    REP(0,N){
        int Y;
        cin >> Y >> F[i];
        int A[4] = {0};
        for(int j=0; j<Y; j++){
            string S; cin >> S;
            int tp = Type(S);
            A[tp]++;
        }
        T.push_back(make_pair(A[1],i));
        P.push_back(make_pair(A[2],i));
        G.push_back(make_pair(A[3],i));
    }
}

void Solve()
{
    sort(T.begin(), T.end());
    sort(P.begin(), P.end());
    sort(G.begin(), G.end());

    int mxT = T[T.size()-1].first;
    int mxP = P[P.size()-1].first;
    int mxG = G[G.size()-1].first;

    vector<int> ind[3];
    for(int i=T.size()-1; i>=0; --i)
        if(T[i].first == mxT)
            ind[0].push_back(T[i].second);
        else break;

    for(int i=P.size()-1; i>=0; --i)
        if(P[i].first == mxP)
            ind[1].push_back(P[i].second);
        else break;


    for(int i=G.size()-1; i>=0; --i)
        if(G[i].first == mxG)
            ind[2].push_back(G[i].second);
        else break;

    sort(ind[0].begin(),ind[0].end());
    sort(ind[1].begin(),ind[1].end());
    sort(ind[2].begin(),ind[2].end());

    printf("If you want to call a taxi, you should call: ");
    for(int i=0; i<ind[0].size(); i++){
        cout << F[ind[0][i]];
        i != ind[0].size()-1 ? printf(", ") : printf(".\n");
    }
    printf("If you want to order a pizza, you should call: ");
    for(int i=0; i<ind[1].size(); i++){
        cout << F[ind[1][i]];
        i != ind[1].size()-1 ? printf(", ") : printf(".\n");
    }
    printf("If you want to go to a cafe with a wonderful girl, you should call: ");
    for(int i=0; i<ind[2].size(); i++){
        cout << F[ind[2][i]];
        i != ind[2].size()-1 ? printf(", ") : printf(".\n");
    }
}
int main()
{
    Init();
    Solve();
}