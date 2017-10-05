#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <math.h>
using namespace std;

double a[100005];
int main()
{
	double n, h, k;
	cin >> n >> h >> k;

	for (int i = 0; i < n; i++) cin >> a[i];

	long double ins = 0.0000000000000000;
	long long sec = 0;
	for (int i = 0; i < n; i++)
	{
		if (ins + a[i] <= h)
		{
			ins += a[i];
			if (ins + a[i + 1] <= h) continue;
		}
		else
		{
			while (ins >(h - a[i]))
			{
				int x = ceil(double(-((h - a[i]) - ins) / double(k)));

				sec += x;
				ins = max(ins - (k*x), 0.00000L);
			}
			ins += a[i];
		}
	}
	sec += ceil(double(ins) / double(k));
	cout << sec << endl;;
}