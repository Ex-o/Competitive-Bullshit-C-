#include <bits/stdc++.h>
using namespace std;

int IND_SUM[100];
int main()
{

	int S, K;
	scanf("%d%d", &S, &K);

	int REACHED_SUM = 2;

	IND_SUM[0] = 1, IND_SUM[1] = 1, IND_SUM[2] = 2;
	int DIFF = 0;
	int IND = 3;
	while (REACHED_SUM < S)
	{
		IND_SUM[IND] = (REACHED_SUM * 2);
		if (IND  > K) {
			IND_SUM[IND] -= IND_SUM[DIFF++];
		}
		REACHED_SUM = IND_SUM[IND];
		IND++;
	}
	vector<int> COMB;
	for (int i = IND - 1; i >= 0; i--) {
		if (IND_SUM[i] <= S)
			COMB.push_back(IND_SUM[i]), S -= IND_SUM[i];
	}
	if (COMB.size() == 1) COMB.push_back(0);
	printf("%d\n", COMB.size());
	for (auto i : COMB) printf("%d ", i);
	//system("pause");
}