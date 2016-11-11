#include<bits/stdc++.h>
#define f first
#define s second

using namespace std;

int main()
{
    string S[4];
    cin >> S[0] >> S[1] >> S[2] >> S[3];

    pair<int,int> Len[4];

    for(int i=0; i<4; i++){
        Len[i].f = S[i].length()-2;
        Len[i].s = i;
    }

    sort(Len,Len+4);

    int ans = -1,n=0;
    char res = '0';

    if((double)Len[0].f <= (double)(Len[1].f / 2.0)){
        n++;
        ans = Len[0].s;
    }

    if(Len[3].f >= Len[2].f *2){
        n++;
        ans = Len[3].s;
    }

    if(n == 2 || !n)
        ans = 2;

    switch (ans){
        case 0: res = 'A'; break;
        case 1: res = 'B'; break;
        case 2: res = 'C'; break;
        case 3: res = 'D'; break;
    }
    cout << res;
}