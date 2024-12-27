#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n; 
	cin >> n;
	
	int mx = 0;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
		mx = max(mx, v[i]);
	}
	
	int g = 0;
	long long s = 0;
	for(int i = 0; i < n; i++){
		g = __gcd(g, mx - v[i]);
		s += (mx - v[i]);
	}
	long long ans;
	if (g == 0) {
		ans = 0;
	} else {
		ans = s / g;
	}
	cout << ans << " " << g << endl;
	
	return 0;
}
