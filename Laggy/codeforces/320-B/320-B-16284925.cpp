#include<bits/stdc++.h>
using namespace std;
#define GetI(x) scanf("%d",&x);
#define GetII(x,y) scanf("%d%d",&x,&y);
#define GetIII(x,y,z) scanf("%d%d%d",&x,&y,&z);
#define GetS(x) scanf("%s",&x);
#define FOR(j) for(int i=0; i<j; ++i)
#define PB push_back
#define RemoveAll(x,z) x.erase(remove(x.begin(),x.end(),z),x.end());
#define IOS ios_base::sync_with_stdio(false);
#define mp make_pair
#define a first
#define b second

pair<int, int> lr[105];
vector<int> Adj[105];
int ind = 0;

void add(int c, int d)
{
	for (int i = 0; i < ind; i++)
	{
		if ((lr[i].a > c && lr[i].a < d) || (lr[i].b > c && lr[i].b < d))
			Adj[i].PB(ind);

		if ((c > lr[i].a && c < lr[i].b) || (d > lr[i].a && d < lr[i].b))
			Adj[ind].PB(i);
	}
}
bool V[105][105];
bool reach(int st, int end)
{
	//cout << st << " " << end << endl;
	if (st == end) return true;
	if (V[st][end]) return false;
	
	V[st][end] = 1;

	
	for (int i = 0; i < Adj[st].size(); i++)
		if ( reach(Adj[st][i], end) ) return true;

	return false;
}

int main()
{
	int N;
	scanf("%d", &N);

	
	FOR(N) {
		int A, B, C;
		GetIII(A, B, C);
		if (A == 1) {
			lr[ind] = mp(B, C);
			add(B, C);
			/*for (int k = 0; k < ind+1; k++)
			{
				for (int j = 0; j < Adj[k].size(); j++)
				{
					cout << k << "-> " << Adj[k][j] << " " << endl;
				}
				cout << endl;
			}*/
			ind++;
		}
		else {
			memset(V, 0, sizeof(V));
			if (reach(B - 1, C - 1))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}


	//system("pause");
}