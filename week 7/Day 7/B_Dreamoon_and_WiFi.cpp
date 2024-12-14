#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    int t = 0, c = 0, q = 0;
    for (char x : a) t += (x == '+') ? 1 : -1;
    for (char x : b) {
        if (x == '+') c++;
        else if (x == '-') c--;
        else q++;
    }

    int d = t - c;
    if (abs(d) > q || (d + q) % 2 != 0) {
        cout << "0.000000000000" << endl;
        return 0;
    }
 
    int p = (d + q) / 2;
    long long f = 1;
    for (int i = 0; i < p; i++) {
        f *= (q - i);
        f /= (i + 1);
    }

    long long w = 1LL << q;
    printf("%.12f\n", (double)f / w);

    return 0;
}
