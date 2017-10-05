#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l, d, v, g, r;
	scanf("%d%d%d%d%d", &l, &d, &v, &g, &r);

	double ans = double(l) / double(v);
	double trf = double(d) / double(v);

	bool f = 1;
	double t = 0;
	if (trf >= g) {
		while (true)
		{
			if (t >= trf && f) break;
			if (f) t += g, f = 0; else t += r, f = 1;
		}
		ans += (t - trf);
	}

	printf("%.10f", ans);
}