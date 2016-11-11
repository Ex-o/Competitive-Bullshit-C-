#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    long long  xDim=0,yDim=0,fDim=0,lip=0,flags=0;
    cin >> xDim >> yDim >> fDim;
    flags = ceil((xDim*1.0)/fDim) * ceil((yDim*1.0)/fDim);
    cout << flags;
}