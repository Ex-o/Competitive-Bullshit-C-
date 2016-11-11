#include<bits/stdc++.h>
using namespace std;
char sA[2000007];
char sB[2000007];
string Split_1(string X)
{
    string ret;

    for(int i=0; i<X.size()/2; i++)
        ret+=X[i];

    return ret;
}

string Split_2(string X)
{

    string ret;

    for(int i=X.size()/2; i<X.size(); i++)
        ret+=X[i];

    return ret;
}
bool isEqual(string F,string S)
{
    int L = F.size();
    for(int i=0; i<L; i++)
        if(F[i]!=S[i])
            return false;
    return true;
}

bool isSame(string E,string F)
{
    int L = E.length();
    strncpy(sA, E.c_str(), sizeof(sA));
    sA[sizeof(sA) - 1] = 0;

    strncpy(sB, F.c_str(), sizeof(sB));
    sB[sizeof(sB) - 1] = 0;

    sort(sB,sB+F.size());
    sort(sA,sA+E.size());

    for(int i=0; i<E.size()-1; i++)
        if(sA[i] != sB[i])
            return false;
    cout << " " << " isSame";
    return true;
}

bool isEqauvilant(string F,string S)
{
    cout << F << " " << S << endl;
    if(F.size() == 1 && (F[0] == S[0])) return true;
    if(F.size() == 1 && (F[0] != S[0])) return false;

    if(isEqual(F,S))
        return true;

    string A = Split_1(F);
    string B = Split_2(F);
    string C = Split_1(S);
    string D = Split_2(S);
    if(((isEqauvilant(A,C) && isEqauvilant(B,D))||(isEqauvilant(A,C) && isSame(B,D))||(isSame(A,C) && isSame(B,D))||(isSame(A,C) && isEqauvilant(B,D))) || ((isEqauvilant(A,D) && isEqauvilant(B,C))||(isEqauvilant(A,D) && isSame(B,C))||(isSame(A,D) && isSame(B,C))||(isSame(A,D) && isEqauvilant(B,C))))
        return true;

    return false;
}

string A,B;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);


//    cin >> A >> B;
//    if(!isEqual(A,B))
//    {
//        if(isEqauvilant(A,B))
//            cout << "YES";
//        else
//            cout << "NO";
//    }
//    else
//        cout << "YES";
   int M,N;
   cin >> M >> N;
   cout << M*N / 2;
}