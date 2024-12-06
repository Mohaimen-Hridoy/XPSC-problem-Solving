#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    long long int testCases, rooms, dustLevel, trailingZeros, totalDust, hasNonZero;
    cin >> testCases;

    while (testCases--) {
        cin >> rooms;
        trailingZeros = totalDust = hasNonZero = 0;

        for (long long int i = 0; i < rooms - 1; i++) {
            cin >> dustLevel;

            if (dustLevel > 0) hasNonZero = 1;
            if (hasNonZero && dustLevel == 0) trailingZeros++;

            totalDust += dustLevel;
        }

        cin >> dustLevel; 
        cout << totalDust + trailingZeros << "\n";
    }

    return 0;
}
