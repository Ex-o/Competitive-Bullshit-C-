#include <bits/stdc++.h>
using namespace std;

int main()
{
	string num; cin >> num;

	long long Ans = 1;
	long long Successive = 0;
	for (long long i = 0; i < num.size()-1; i++)
	{
		if (((num[i] - '0') + (num[i + 1] - '0')) == 9)
			Successive++;
		else {
			if (!(Successive & 1) && Successive) Ans *= (Successive +2) >> 1;
			Successive = 0;
		}
	}
	if (!(Successive & 1) && Successive) Ans *= (Successive + 2) >> 1;
	cout << Ans;
}