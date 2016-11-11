#include <bits/stdc++.h>
using namespace std;

int D[33][13][2016];
bool Verify(int dd, int mm, int yy)
{
	int dy[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (!(yy >= 2013 & yy <= 2015) || dd < 1 || mm < 1 || mm > 12) return false;
	if (dd > dy[mm-1]) return false;

	return true;
}
int main()
{
	string str; cin >> str;
	
	for (int i = 0; i < str.size()-9; i++)
	{
		bool isDate = 1;
		for (int j = 0; j < 10; j++)
		{
			if ((str[i + j] == '-' && (j != 2 && j != 5)) || ((j == 2 || j == 5) && str[i + j] != '-')) {
				isDate = 0;
				break;
			}
		}
		if (isDate) {
			int DY = stoi(str.substr(i, 2));
			int MN = stoi(str.substr(i + 3, 2));
			int YR = stoi(str.substr(i + 6, 4));
			//printf("%d %d %d\n", DY, MN, YR);
			if (Verify(DY, MN, YR)) {
				D[DY][MN][YR]++;
			}
		}
	}
	int mxn = -1, dy, mn, yr;
	for (int i = 2013; i <= 2015; i++)
		for (int j = 1; j <= 12; j++)
			for (int x = 1; x <= 31; x++) {
				if (D[x][j][i] > mxn) {
					mxn = D[x][j][i];
					yr = i;
					mn = j;
					dy = x;
				}
			}

	printf("%02d-%02d-%04d\n", dy, mn, yr);
//	system("pause");
}