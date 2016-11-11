#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int A,B,A1,B1,A2,B2;
    cin >> A >> B >> A1 >> B1 >> A2 >> B2;

    bool First = (A1+A2 <= A && max(B1,B2) <= B);
    bool Second = (B1+B2 <= A && max(A1,A2) <= B);
    bool Third = (A1+B2 <= A && max(A2,B1)<= B);
    bool Forth = (A2 + B1 <= A && max(A1,B2) <= B);
    bool Fifth = (B1 <= A && A1 <= B && (A2 <= A && B2 <= B-A1));
    bool Sixth = (B2 <= A && A2 <= B && (A1 <= A && B1 <= B-A2));
    bool Seventh = (B1 <= B && A1 <= A && (A2 <= B && B2 <= A-A1));
    bool Eigth = (B2 <= B && A2 <= A && (A1 <= B && B1 <= A-A2));
    bool Ninth = (A1+A2 <= B && max(B1,B2) <= A);
    bool Tenth = (B1+B2 <= B && max(A1,A2) <= A);

    if(First || Second || Third || Forth || Fifth || Sixth || Seventh || Eigth || Ninth || Tenth)
        printf("YES");
    else
        printf("NO");
}