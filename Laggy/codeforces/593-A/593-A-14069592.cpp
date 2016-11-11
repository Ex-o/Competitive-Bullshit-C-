#include<bits/stdc++.h>
using namespace std;
int AdjMat[27][27];

int main()
{
    int N;
    cin >> N;
    memset(AdjMat,0,sizeof(AdjMat));

    for(int i=0; i<N; i++)
    {
        string word;
        cin >> word;
        int a[27];
        memset(a,0,sizeof(a));
        int cnt=0;
        int inWord[27];
        for(int j=0; j<word.length(); j++)
        {
            if(a[word[j] - 'a'] == 0)
            {
                cnt++;
                a[word[j] - 'a'] ++;
                inWord[cnt] = word[j] - 'a';
                //cout << word[i] - 'a';
            }
        }
        //cout << cnt << endl;
        if(cnt == 2)
        {
            AdjMat[inWord[1]][inWord[2]] += word.length();
            AdjMat[inWord[2]][inWord[1]] += word.length();
        }
        else if(cnt == 1)
        {
            for(int r=0; r<27; r++)
                if(r!= inWord[1])AdjMat[r][inWord[1]]+=word.length();

            for(int c=0; c<27; c++)
                if(c!= inWord[1])AdjMat[inWord[1]][c]+=word.length();
        }
    }
    int Ans = 0;

    for(int r=0; r<27; r++){
        for(int c=0; c<27; c++){
            Ans = max(Ans,AdjMat[r][c]);
            //cout << AdjMat[r][c] << " ";
        }
        //cout << endl;
    }

    cout << Ans;
}