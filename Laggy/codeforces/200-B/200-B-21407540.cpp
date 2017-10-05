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
typedef long long ll;
typedef long double d;
#define FOR(x) for(int i=0; i<x; i++)

int main()
{
	int h = 0;
	int n;
	scanf("%d", &n);
	FOR(n) {
		int t;
		scanf("%d", &t), h += t;
	}
	printf("%.9f", (h / double(n)));
}