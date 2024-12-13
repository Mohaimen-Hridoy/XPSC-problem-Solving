#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> armies(m + 1);
    for (int i = 0; i <= m; i++) 
    {
        cin >> armies[i];
    }

    int fedorArmy = armies[m];
    int friends = 0;

    for (int i = 0; i < m; i++) {
        int xorValue = armies[i] ^ fedorArmy;
        int distance = 0;

        
        while (xorValue > 0) {
            distance += xorValue & 1;
            xorValue >>= 1; 
        }

        if (distance <= k) {
            friends++;
        }
    }

    cout << friends << endl;

    return 0;
}
    