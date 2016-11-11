#include<bits/stdc++.h>
using namespace std;
int main()
{
    double L[6];
    for(int i=0; i<6; i++)
        cin >> L[i];

    double X[6],Y[6];

    X[0] = 1.0; Y[0] = 1.0;
    X[1] = 1.0 + L[0]; Y[1] = 1.0;

    double Ang[] = {0,0,60,120,180,-120};

    for(int i=2; i<6; i++){
        X[i] = X[i-1] + L[i-1] * cos(Ang[i]*0.017453292519);
        Y[i] = Y[i-1] + L[i-1] * sin(Ang[i]*0.017453292519);
    }

    double area = 0;

    for (int i = 0; i < 5; i++)
      area += X[i] * Y[i+1] - X[i+1] * Y[i];

    area += X[5] * Y[0] - X[0] * Y[5];
    area = abs(area) / 2.0;
    int T = round(area/0.43301270189);
    cout << T;
}