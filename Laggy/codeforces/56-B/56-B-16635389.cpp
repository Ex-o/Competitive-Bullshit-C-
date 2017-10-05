#include <bits/stdc++.h>
using namespace std;
int shex[1001];
int org[1001];
int main()
{
	int N; scanf("%d", &N);

	for (int i = 0; i < N; i++) scanf("%d", &shex[i]);

	for (int i = 0; i < N; i++) org[i] = i + 1;

	int s = 0, e = 0;
	for (int i = 1; i < N; i++)
	{
		if (shex[i - 1] > shex[i]) {
			if (!s) s = i;
			//else e = i;
		}
		else {
			if (s) { e = i; break; }
		}
	}

	if (s && !e) e = N;

	if(s && e) reverse(shex + s-1, shex + e);
	for (int i = 0; i < N; i++) {
		if (shex[i] != org[i] || (!s || !e)) {
			cout << "0 0" << endl;
			return 0;
		}
	}
	cout << s << " " << e;
}