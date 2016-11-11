/*
ID: GXFwVFYg28F
PROG: milk3
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;


int A,B,C;
int Visited[22][22][22];
vector<int>Value;
void Solve(int cA,int cB,int cC)
{
    if(Visited[cA][cB][cC] == -1){
        Visited[cA][cB][cC] =0;

       if(cA==0)
            Value.push_back(cC);

        if (cA>B-cB) Solve(cA-B+cB,B,cC);
        else Solve(0,cA+cB,cC);

        if (cA>C-cC) Solve(cA-C+cC,cB,C);
        else Solve(0,cB,cA+cC);

        if (cB>C-cC) Solve(cA,cB-C+cC,C);
        else Solve(cA,0,cB+cC);

        if (cB>A-cA) Solve(A,cB-A+cA,cC);
        else Solve(cA+cB,0,cC);

        if (cC>A-cA) Solve(A,cB,cC-A+cA);
        else Solve(cA+cC,cB,0);

        if (cC>B-cB) Solve(cA,B,cC-B+cB);
        else Solve(cA,cB+cC,0);


    }
}

int main()
{
    freopen("milk3.in","r",stdin);
    freopen("milk3.out","w",stdout);

    memset(Visited,-1,sizeof Visited);
    scanf("%i%i%i",&A,&B,&C);
    Solve(0,0,C);
    sort(Value.begin(),Value.end());
    cout << Value[0];
    for(int i=1; i<Value.size(); i++)
        printf(" %i",Value[i]);
        cout << endl;
}









//int X=0,S=0;
//int cStack[10002][10002];
//int Arr[1000002];
//int M=0;
//vector<int> vStack;
//int Count(int i,int s) //Task[1]
//{
//    if(s==S) return 1;
//    else if(s>S || i>X-1) return 0;
//
//    return Count(i+1,Arr[i]+s)+Count(i+1,s);
//}
//
//int Min(int i, int s) //Task[2]
//{
//    int M=1;
//    if(s==S) return 1;
//    if(s>S || i>X-1) return 999;
//    M+= min(1+Min(i+1,s),Min(i+1,s+Arr[i]));
//
//    return M;
//}
//
//int Rep(int i, int s) //Task[3]
//{
//    if(s==S) return 1;
//    else if(s>S || i>X-1) return 0;
//
//    return Rep(i,Arr[i]+s)+Rep(i+1,Arr[i]+s);
//}
//


