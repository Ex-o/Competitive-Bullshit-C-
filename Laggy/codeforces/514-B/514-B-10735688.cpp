#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <set>
using namespace std;
struct cObj
{
	double x, y;
};
set<double> Slopes;
int cOff=0;
int getSlope(cObj gun, cObj mob)
{
    double dY = gun.y - mob.y;
    double dX = gun.x - mob.x;
    if(dX != 0)
    Slopes.insert(dY/dX);
    else
        cOff = 1;
}

int main()
{
    double nMobs =0, xX,yY;
	vector<cObj> vObj,xObj;
	cin >> nMobs >> xX >> yY;
	xObj.push_back({xX,yY});
    for (int i = 0 ; i < nMobs ; i++)
    {
        double X,Y;
        cin >> X >> Y;
        vObj.push_back({X,Y});
        getSlope(xObj[0],vObj[i]);
    }
    cout << Slopes.size() +cOff;
}