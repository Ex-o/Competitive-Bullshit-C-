#include <bits/stdc++.h>
using namespace std;
int sq(int i) { return i*i; }

int main ()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int s  = 0, d = (sqrt(sq(x2 - x1) + sq(y2 - y1)));;

    if(x1 == x2)
        printf("%d %d %d %d",x1+d,y1,x2+d,y2);
    else if(y1 == y2)
        printf("%d %d %d %d",x1,y1+d,x2,y2+d);
    else
    {
        if(abs(x1 - x2) != abs (y1 - y2))
        {
            printf("-1");
            return 0;
        }
        else
            printf("%d %d %d %d",x1,y2,x2,y1);
    }
}