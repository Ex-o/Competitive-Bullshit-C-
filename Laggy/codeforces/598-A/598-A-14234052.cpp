#include <iostream>
#include <math.h>
#include <stdio.h>
int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        long long N;
        std::cin >> N;
        long long ANS = 0;
        long long remove = 1;
        for (long long i = 1; i <= 50; i++)
        {
            if (pow(2, i) <= N) remove += (pow(2, i));
            else break;
        }
        ANS = (N * (N + 1)) / 2;
        std::cout << ANS - remove * 2 << std::endl;
    }
    return 0;
}