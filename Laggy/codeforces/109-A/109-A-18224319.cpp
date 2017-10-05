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
	int N; cin >> N;

	int f = 0;
	for (int i = 1; i <= N && i*4 <= N; i++)
	{
		if ((i * 4) + N - (i * 4) == N && (N - (i * 4)) % 7 == 0) {
			f = i;
			break;
		}
	}
	if (N % 7 == 0) {
		cout << string(N / 7, '7');
		return 0;
	}
	if (f == 0 && (N - (f * 4)) * 7 != N) {
		cout << -1;
		return 0;
	}
	cout << string(f, '4') << string((N-(f*4))/7,'7') << endl;
}