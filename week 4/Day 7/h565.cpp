#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;

    vector<int>arr(n);
    for (int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }


    int start=0;
    int current_sum=0;
    int max_length=0;

    for (int end=0;end<n;end++) 
    {
        current_sum+=arr[end]; 

        while (current_sum > k) 
        {
            current_sum -= arr[start];
            start++;
        }

        if (current_sum == k) 
        {
            max_length = max(max_length, end - start + 1);
        }
    }

    cout << max_length << endl;

    return 0;
}
