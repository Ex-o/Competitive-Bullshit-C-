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


int main()
{
	string s1, s2; cin >> s1 >> s2;
	sort(s2.rbegin(), s2.rend());

	int ii = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (ii == s2.size()) break;
		if (s1[i] < s2[ii]) {
			s1[i] = s2[ii];
			ii++;
		}
	}
	cout << s1 << endl;
}