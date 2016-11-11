#include<bits/stdc++.h>
using namespace std;
int N;
int J[100005];
int main()
{
    scanf("%d",&N);
    int L = -1,R = -1;
    bool Z = 0;
    for(int i=0; i<N; i++) scanf("%d",&J[i]);

    for(int i=0; i<N-1; i++)
    {
        if(J[i] > J[i+1])
        {
            if(L == -1){
                L = i;
                R = i+1;
            }
            else
                R = i+1;
        }
        else if(R!= -1  && L!= -1 && J[i] < J[i+1]) break;
    }
    int A = L,B=R;
    while(A < B)
    {
        int temp = J[A];
        J[A] = J[B];
        J[B] = temp;
        A++;
        B--;
    }
    for(int i=0; i<N-1; i++)
        if(J[i] > J[i+1]){
        printf("no");
        return 0;
    }
    if(L == -1) { L++; R++;}
    cout <<"yes\n" << L+1 << " " << R+1;
}