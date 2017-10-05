#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int c = count(s.begin(), s.end(), 'X');
  int d = count(s.begin(), s.end(), 'x');
  int ans = 0;
  if(c > d){
    for(int i = 0; i < n && c > d; i++){
      if(s[i] == 'X') {
        s[i] = 'x';
        c--;
        d++;
        ++ans;
      }
    }
  }
  else if(d > c){
    for(int i = 0; i < n && d > c; i++){
      if(s[i] == 'x') {
        s[i] = 'X';
        d--;
        c++;
        ++ans;
      }
    }
  }
  cout << ans << endl << s;
}