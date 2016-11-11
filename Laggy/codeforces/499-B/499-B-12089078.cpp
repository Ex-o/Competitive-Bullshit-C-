#include<bits/stdc++.h>
using namespace std;
map<string,string> J;
int main(void)
{
    ios_base::sync_with_stdio(false);
    int N,M;
    string Lec;
    cin >> N >> M;

    for(int i=0; i<M; i++){
        string X,Y;
        cin >> X >> Y;
        J[X] = Y;
    }

    for(int i=0; i<N; i++){
        string Z;
        cin >> Z;
        if(Z.length() <= J[Z].length())
            Lec+= Z+" ";
        else
            Lec+= J[Z]+" ";
    }
    printf("%s",Lec.c_str());
    return 0;
}