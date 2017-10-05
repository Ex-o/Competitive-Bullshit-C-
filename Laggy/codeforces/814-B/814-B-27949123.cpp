#include <bits/stdc++.h>

using namespace std;
int a[1001];
int b[1001];
int ao[1001];
int bo[1001];
int main(){
    int n;
    int dupA = 0, dupB = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ao[a[i]]++;
        if(ao[a[i]] == 2)
            dupA = a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
        bo[b[i]]++;
        if(bo[b[i]] == 2)
            dupB = b[i];
    }
    int c = 0, d = 0;
    for(int i = 1; i <= n; i++){
        if(ao[i] == 0)
            c = i;

        if(bo[i] == 0)
            d = i;
    }

    for(int i = 0; i < n; i++){
        if(a[i] == dupA){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(j == i){
                    if(b[i] == c)
                        cnt++;
                }
                else if(a[j] == b[j])
                    cnt++;
            }
            if(cnt == n - 1){
                a[i] = c;
                for(int k = 0; k < n; k++)
                    cout << a[k] << " ";
                return 0;
            }
        }
    }
}