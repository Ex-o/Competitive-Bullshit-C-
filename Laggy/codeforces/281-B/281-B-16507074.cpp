#include <bits/stdc++.h>
using namespace std;

vector< pair<int, int> > shit;
int main()
{
	/*double A = 72657, B = 93778, C = 38236, D = 49351, E = 34421, F = 44427;

	printf("%.15f\n", (A / B) - (C / D));
	printf("%.15f\n", (A / B) - (E / F));

	system("pause");*/

	double X, Y, N;
	cin >> X >> Y >> N;

	//if (N >= Y) {
		//cout << X << "/" << Y;
		//return 0;
	//}

	double mn_diff = 555555555.555555555;
	for (int i = 1; i <= N; i++)
	{
		int l = 0, r = 100000;
		int bst_up = 0;
		while (l <= r)
		{
			int m = (l + r) / 2;
			double diff = (X / Y) - (double(m) / double(i));
			if (diff < 0.0) r = m - 1; else l = m + 1;
			
			if (abs(diff) < mn_diff) {
				mn_diff = abs(diff);
				shit.clear();
				shit.push_back(make_pair(i, m));
			}
			else if (abs(diff) == mn_diff) {
				shit.push_back(make_pair(i, m));
			}
		}
	}
	sort(shit.begin(), shit.end());
	//for (int i = 0; i < shit.size(); i++)
		printf("%d/%d\n", shit[0].second, shit[0].first);
	//system("pause");
}