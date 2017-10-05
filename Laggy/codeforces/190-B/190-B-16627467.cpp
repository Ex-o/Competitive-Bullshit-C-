#include <bits/stdc++.h>
using namespace std;

double sq(double x) {
	return x*x;
}

int main()
{
	double A, B, C, X, Y,Z;
	cin >> A >> B >> C >> X >> Y >> Z;

	double cur = sqrt(sq(A - X) + sq(B - Y));

	if (!(C + Z < cur) && !(cur < abs(C - Z)))
	{
		printf("%.12f", 0);
		return 0;
	}
	if (C + Z > cur) {
		cur -= (C + Z);
		cur /= 2.0;
		cur = abs(cur + min(C, Z));
	}
	else {
		cur -= (C + Z);
		cur /= 2.0;
	}

	printf("%.12f", cur);
}