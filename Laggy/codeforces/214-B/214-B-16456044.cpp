#include <bits/stdc++.h>
using namespace std;

vector<int> di;
int IND[15][2];
vector<int> NU;
int main()
{
	int N; scanf("%d", &N);
	
	long long SUM = 0;
	for (int i = 0; i < N; i++) {
		int X; scanf("%d", &X);
		NU.push_back(X);
		SUM += X;
	}

	sort(NU.begin(), NU.end(), greater<int>());
	//cout << SUM << endl;
	if (NU[N - 1] != 0) {
		printf("%d", -1);
		return 0;
	}
	if ((SUM % 3) == 0) {
		if (SUM == 0) {
			printf("%d", 0);
			return 0;
		}
		for (auto x : NU)
			printf("%d", x);
		return 0;
	}
	bool f = 0;
	int REM = SUM % 3;

	memset(IND, -1, sizeof(IND));

	for (int i = 0; i < NU.size(); i++) {
		if (IND[NU[i]][0] == -1) {
			di.push_back(NU[i]);
			IND[NU[i]][0] = i;
		}
		else if (IND[NU[i]][1] == -1) {
			di.push_back(NU[i]);
			IND[NU[i]][1] = i;
		}
	}

	int mx = -5555555, l = 0, r = 0;

	for (int i = di.size() - 1; i >= 0; i--)
	{
		if (REM == 1) {
			if (di[i] == 1 || di[i] == 4 || di[i] == 7) {
				NU.erase(NU.begin() + IND[di[i]][0]);
				SUM -= di[i];
				f = 1;
				break;
			}
		}
		else if (REM == 2) {
			if (di[i] == 2 || di[i] == 5 || di[i] == 8) {
				NU.erase(NU.begin() + IND[di[i]][0]);
				SUM -= di[i];
				f = 1;
				break;
			}
		}
	}
	for (int i = di.size() - 1; i >= 0 && !f; i--)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (REM == 1) {
				if ((di[i] + di[j]) == 1 || (di[i] + di[j]) == 4 || (di[i] + di[j]) == 7 || (di[i] + di[j]) == 10 || (di[i] + di[j])%3 == 1) {
					if (di[i] == di[j]) {
						SUM -= (di[i] * 2);
						NU.erase(NU.begin() + max(IND[di[i]][0], IND[di[i]][1]));
						NU.erase(NU.begin() + min(IND[di[i]][0], IND[di[i]][1]));
						f = 1;
						break;
					}
					else {
						if (min(IND[di[i]][0], IND[di[j]][0]) > mx) {
								mx = min(IND[di[i]][0], IND[di[j]][0]);
								l = IND[di[i]][0];
								r = IND[di[j]][0];
						}
					}
				}
			}
			else if (REM == 2) {
				if ((di[i] + di[j]) == 2 || (di[i] + di[j]) == 5 || (di[i] + di[j]) == 8 || (di[i] + di[j]) % 3 == 2) {
					//cout << IND[di[i]][0] << " " << IND[di[i]][1] << " = " << di[j] + di[i] << endl;
					if (di[i] == di[j]) {
						SUM -= (di[i] * 2);
						NU.erase(NU.begin() + max(IND[di[i]][0], IND[di[i]][1]));
						NU.erase(NU.begin() + min(IND[di[i]][0], IND[di[i]][1]));
						f = 1;
						break;
					}
					else {
						if (min(IND[di[i]][0], IND[di[j]][0]) > mx) {
								mx = min(IND[di[i]][0], IND[di[j]][0]);
								l = IND[di[i]][0];
								r = IND[di[j]][0];
						}
					}
				}
			}
		}
	}
	if (l == -1 || r == -1) {
		printf("%d", -1);
		return 0;
	}
	if (!f) {
		SUM -= NU[l];
		SUM -= NU[r];

		NU.erase(NU.begin() + max(l, r));
		NU.erase(NU.begin() + min(l, r));
	}
	if (SUM == 0) {
		printf("%d", 0);
		return 0;
	}
	for (auto x : NU)
		printf("%d", x);

	//system("pause");
}