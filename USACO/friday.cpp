/*
ID: k.m.epv1
LANG: C++
TASK: friday
*/
#include<bits/stdc++.h>
using namespace std;
bool isLeap(int Y)
{
    return ((Y % 4 == 0 && Y % 100 != 0) || ( Y % 400 == 0));
}
int main()
{
    freopen("friday.in","r",stdin); freopen("friday.out","w",stdout);
    int startDay = 3;
    int startYear = 1900;
    int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int O[8]; memset(O,0,sizeof O);
    int N; scanf("%d",&N);
    for(int i=0; i<N; i++){
            if(isLeap(startYear))
                months[1] = 29;
            else months[1] = 28;
        for(int j=1; j<=12; j++){
            for(int d=1; d<=months[j-1]; d++){

                if(d == 13)
                    O[startDay]++;

                if(startDay == 7)
                    startDay = 1;
                else
                    startDay++;
            }
        }
        startYear++;
    }
    cout << O[1];
    for(int i=2; i<=7; i++)
        cout <<" "<< O[i];
        cout << endl;
}
