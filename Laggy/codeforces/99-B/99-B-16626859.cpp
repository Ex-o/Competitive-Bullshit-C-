#include <bits/stdc++.h>
using namespace std;

int hentai[1000005];
int cnt[1000005];
int main()
{
	int N; scanf("%d", &N);
	int s=999999999, e=0;
	long long sum = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", &hentai[i]); sum += hentai[i];
		cnt[hentai[i]]++;
		s = min(s, hentai[i]); e = max(e, hentai[i]);
	}
	
	bool ok = 0, sm = 0;
	vector<int> ans;
	int av = sum / N;
	for (int i = s; i <= e; i++) {
		if (cnt[i] == N - 2) ok = 1;
		if(cnt[i] == 1 && i != av) ans.push_back(i);
		if (cnt[i] == N) sm = 1;
	}
	if (sm) {
		printf("%s", "Exemplary pages.");
		return 0;
	}
	else if ((!ok && N > 2 ) || sum%N != 0 || ans.size() != 2) {
		printf("%s", "Unrecoverable configuration.");
		return 0;
	}
	else {
		vector<int> ind;
		for (int i = 0; i < N; i++) 
				if (ans[0] == hentai[i]) ind.push_back(i);
		for (int i = 0; i < N; i++)
			if (ans[1] == hentai[i]) ind.push_back(i);

		if (ans[0] > ans[1]) {
			swap(ans[0], ans[1]);
			swap(ind[0], ind[1]);
		}
		printf("%d ml. from cup #%d to cup #%d.", ans[1] - av, ind[0]+1,ind[1]+1);
	}
}