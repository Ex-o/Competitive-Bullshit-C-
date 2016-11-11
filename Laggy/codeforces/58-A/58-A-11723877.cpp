#include<bits/stdc++.h>
using namespace std;
bool A=0,B=0,C=0,D=0,E=0;
bool L=0;
int main()
{
  string S; cin >> S;
  for(int i=0; i<S.size(); i++)
  {
      if(S[i] == 'h')
        A=1;
      else if(S[i]== 'e' && A && !C && !D && !E)
        B=1;
      else if(S[i]== 'l' && A && B && !D && !E && !L)
        {C=1; L=1;}
      else if(S[i]== 'l' && A && B && C && !E && L)
        D=1;
      else if(S[i]== 'o' && A && B && C && D)
        E=1;
  }
  if(A&&B&&C&&D&&E)
    cout << "YES";
  else
    cout <<"NO";
}