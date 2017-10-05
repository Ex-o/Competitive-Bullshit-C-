#include <bits/stdc++.h>
using namespace std;
double arr[1005];

double sq(double x){
	return x*x;
}

int main()
{
	double A, B, C,X,Y;
	cin >> A >> B >> C;

	double dist = 5555555.555555555;
	double lst = 0.0;
	for (int i = 0; i < A; i++)
		cin >> arr[i];
	cin >> X >> Y;
	int ans = -1;
	for (int i = 1; i < A; i++)
	{
		double cur = sqrt(sq(arr[i] - X) + sq(0.00 - Y));
		double tm = (sqrt(sq(arr[1] - arr[i]))/B) + (cur / C);

		if (tm < dist) {
			lst = cur;
			dist = tm;
			ans = i + 1;
		}
		if (tm == dist) {
			if (lst > cur) ans = i + 1, lst = cur;
		}
	}
	cout << ans << endl;
}