#include <bits/stdc++.h>
using namespace std;


int main()
{
	int A, B;
	scanf("%d%d", &A, &B);
	int T; cin >> T;

	for (int i = 0; i < A; i++) {
		int V; cin >> V;
	}
	int t7t; cin >> t7t;

	if (A < max(A, B)) {
		printf("0/1");
		return 0;
	}
	if (A != B && A) {
		if (T * t7t < 0) {
			printf("-Infinity");
		}
		else
			printf("Infinity");

		return 0;
	}
	
	int gcd = __gcd(abs(T), abs(t7t));
	if (T * t7t < 0) printf("-");
	cout << abs(T) / gcd << "/" << abs(t7t) / gcd;
	//system("pause");
}