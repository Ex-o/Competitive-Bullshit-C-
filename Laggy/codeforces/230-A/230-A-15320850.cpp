#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    scanf("%d%d",&s,&n);
    vector<pair<int,int> > v;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        if(s > v[i].first)
            s+=v[i].second;
        else{
            cout << "NO\n";
            return 0;
        }
    }
    printf("YES\n");
}