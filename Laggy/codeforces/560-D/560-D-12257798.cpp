#include<bits/stdc++.h>
using namespace std;

string A,B;
bool Answer(int f_Start,int s_Start, int c_Len)
{
    if(c_Len == 1){
        if(A[f_Start] == B[s_Start])
            return true;
        else return false;
    }

    bool isEqual = 1;

    for(int i=0; i<c_Len; i++){
        if(A[f_Start +i] != B[s_Start +i]){
            isEqual = 0;
            break;
        }
    }


    if(isEqual)
       return true;


    if(c_Len % 2 == 1) return false;

        int n_Len = c_Len / 2;

        if( (Answer(f_Start,s_Start+n_Len,n_Len) && Answer(f_Start+n_Len,s_Start,n_Len) )|| (Answer(f_Start,s_Start,n_Len) && Answer(f_Start+n_Len,s_Start+n_Len,n_Len)))
            return true;
        else return false;

}
int main()
{
    cin >> A >> B;

    int n_Len = A.length();



    if(A==B){
        printf("YES");
        return 0;
    }

        if(n_Len%2 == 1){
        printf("NO");
        return 0;
    }

    int h_Len = n_Len/2;

    if((Answer(0,h_Len,h_Len) && Answer(h_Len,0,h_Len)) || (Answer(h_Len,h_Len,h_Len) && Answer(0,0,h_Len)))
        printf("YES");
    else
        printf("NO");

    return 0;
}