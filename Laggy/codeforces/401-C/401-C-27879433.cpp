#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,m;
  cin >> n >> m;

  if(m < n-1 || ceil(m/2.0) - 1 >  n){
    cout << -1;
    return 0;
  }
  string st = "";
  int po = n - 1;

  while(po * 2 > m || m - po * 2 < (n - 1 - po)){
    --po;
  }

  for(int i = 0; i < n - 1; i++){
    st += "0";
    if(po > 0)
        st += "11", m -= 2, po--;
    else st += "1", m--;
  }

  if(m >= 2){
    cout << string(2,'1');
    m -= 2;
  }
  else{
    cout << string(m,'1');
    m = 0;
  }
  st += "0";

  cout << st << string(m,'1');
  return 0;
}