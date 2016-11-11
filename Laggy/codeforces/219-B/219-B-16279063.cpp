#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define GetII(x,y) scanf("%d%d",&x,&y);
#define GetIII(x,y,z) scanf("%d%d%d",&x,&y,&z);
#define GetS(x) scanf("%s",&x);
#define FOR(j) for(int i=2; i<j; ++i)
#define PB push_back
#define RemoveAll(x,z) x.erase(remove(x.begin(),x.end(),z),x.end());
#define IOS ios_base::sync_with_stdio(false);
long long get(long long x, long long y)
{
	long long t = y;
	long long res = 0;
	while (t > 1)
		x /= 10,t--;

	x--;
	while (y > 1)
		x *= 10, x += 9, y--;

	return x;
}

long long pow2(int x)
{
	long long  res = 10;
	while (x--)
		res *= 10;

	return res;
}
int get9(long long g)
{
	int res = 0;
	while (g != 0)
	{
		if (g % 10 == 9) {
			res++;
			g /= 10;
		}
		else break;
	}
	return res;
}
int main()
{
	long long base,mxdiff;
	cin >> base >> mxdiff;
	int ndig = 0;
	long long t = base;

	while (t != 0) {
		ndig++;
		t /= 10;
	}
	long long cur_ans = base;
	for (int i = 2; i <= ndig; i++)
	{
		long long lst = base % pow2(i);
		long long n = get(lst, i);
		//cout << lst << " " << n << endl;
		if (lst - n <= mxdiff && lst != 0) cur_ans = (base - lst) + n;
	}
	if (get9(cur_ans) > get9(base))
		cout << cur_ans;
	else
		cout << base;
	//main();
	//system("pause");
}