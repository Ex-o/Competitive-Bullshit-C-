#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846

using namespace std;

double x[100005], y[100005];
double pow(double x){
    return x*x;
}
double dist(double p1x, double p1y, double p2x, double p2y){

    return sqrt(pow(p1x - p2x) + pow(p1y - p2y));
}
int main(){
    int n, a;
    cin >> n >> a;

    for(int i = 0; i < n; i++){
        x[i] = 10.00 * cos(2 * M_PI * i / n);
        y[i] = 10.00 * sin(2 * M_PI * i / n);
    }
    double cur = 1 << 30;
    double curr = 0;
    int l = -1;
    for(int i = 2; i < n; i++){
        double an =  (180.0/M_PI) * acos((pow(dist(x[1],y[1], x[0], y[0])) + pow(dist(x[1], y[1], x[i], y[i])) - pow(dist(x[0], y[0], x[i], y[i])))/(2 * dist(x[1],y[1], x[0], y[0]) * dist(x[1], y[1], x[i], y[i])));

        if(abs(an - a) < cur){
            cur = abs(an - a);
            curr = an;
            l = i;
        }
    }
    cout << l + 1 << " 2 1" << endl;
}