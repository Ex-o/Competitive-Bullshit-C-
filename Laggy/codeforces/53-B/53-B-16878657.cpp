#include <bits/stdc++.h>
using namespace std;
long long powersOfTwo[33] =
{ 1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,
65536,131072,262144,524288,1048576,2097152,4194304,8388608,
16777216,33554432,67108864,134217728,268435456,536870912,
1073741824,2147483648 , 999999999999 };
bool isPowerOfTwo(int x)
{
	return ((x != 0) && !(x & (x - 1)));
}
int main()
{
	int H, W; scanf("%d%d", &H, &W);

	double nRatio = double(H) / double(W);

	if ((isPowerOfTwo(H) || isPowerOfTwo(W)) && (nRatio >= 0.8 && nRatio <= 1.25)) {
		printf("%d %d\n", H, W);
		return 0;
	}
	int A = 0, B = 0;
	if (isPowerOfTwo(H)) {
		for (int i = H / 1.25; i <= H / 0.8; i++) {
			if (i <= W && H / i >= 0.8 && H / i <= 1.25) {
				B = i; break;
			}
		}
	}
	int mArea = H + B;
	if (isPowerOfTwo(W)) {
		for (int i = W * 1.25; i >= W * 0.8; i--) {
			if (i <= H) A = i; break;
		}
	}

	if (!isPowerOfTwo(H) && !isPowerOfTwo(W))
	{
		int T, V;
		int G, K;
		for (int i = 0; i < 33; i++)
			if (powersOfTwo[i] > H) {
				T = powersOfTwo[i - 1]; break;
			}
		for (int i = ceil((double(T) / 0.8)); i >= double(T) / 1.25; i--) {
			if (i <= W && ceil((double(T) / i)) >= 0.8 && ceil((double(T) / i)) <= 1.25) {
				V = i; break;
			}
		}

		for (int i = 0; i < 33; i++)
			if (powersOfTwo[i] > W) {
				G = powersOfTwo[i - 1]; break;
			}
		for (int i = G * 1.25; i >= G * 0.8; i--) {
			if (i <= H && double(i) / G >= 0.8 && double(i) / G <= 1.25) {
				K = i; break;
			}
		}

		if (T + V > G + K) printf("%d %d\n", T, V);
		else printf("%d %d\n", K, G);
		return 0;
	}
	if (W + A >= mArea && W && A) {
		printf("%d %d\n", A, W);
	}
	else if(H && B)
	 printf("%d %d\n", H, B);
}