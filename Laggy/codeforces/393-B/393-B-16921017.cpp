#include <bits/stdc++.h>
using namespace std;
int W[171][171];
double A[171][171], B[171][171];
int N;

int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) scanf("%d", &W[i][j]);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			double mid = (W[i][j] + W[j][i]) / 2.00;
			A[i][j] = mid, A[j][i] = mid;
			B[i][j] = W[i][j] - mid;
			B[j][i] = -B[i][j];
		}
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)
			printf("%f ", A[i][j]);
		cout << endl;
	}
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)
			printf("%f ", B[i][j]);
		cout << endl;
	}
}