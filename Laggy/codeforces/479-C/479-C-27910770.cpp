#include<bits/stdc++.h>

using namespace std;

pair<int , int> days[5005];
int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    cin >> days[i].first >> days[i].second;

    sort(days, days + n);

    int lastBest = 0;

    for(int i = 0; i < n; i++){
        if(lastBest <= days[i].second){
            lastBest = days[i].second;
        }
        else lastBest = days[i].first;
    }

    cout << lastBest;
}