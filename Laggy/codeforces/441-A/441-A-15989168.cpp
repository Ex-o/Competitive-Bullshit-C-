#include<bits/stdc++.h>
using namespace std;

int main()
{
    int R,C;
    scanf("%d%d",&R,&C);

    set<int> A;
    for(int i=0; i<R; i++)
    {
        int N;
        scanf("%d",&N);
        for(int j=0; j<N; j++){
            int T; scanf("%d",&T);
            if(T < C){
                A.insert(i);
                //break;
            }
        }
    }

    printf("%d\n",A.size());

    for(set<int>::iterator i = A.begin(); i!= A.end(); i++)
        printf("%d ",*i+1);
}