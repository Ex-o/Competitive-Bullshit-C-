#include<bits/stdc++.h>
using namespace std;
map<string,int> M;
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        string T;
        cin >> T;
        if(M[T] == 0){
            M[T] = 1;
            printf("OK\n");
        }
        else
            printf("%s%d\n",T.c_str(),M[T]++);
    }
}