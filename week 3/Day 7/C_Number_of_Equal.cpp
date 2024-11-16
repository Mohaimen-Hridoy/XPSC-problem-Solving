#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;

    int arr[a];
    int brr[b];

    for (int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    for (int i=0;i<b;i++)
    {
        cin>>brr[i];
    }

    int l=0,r=0;
    long long int ans=0;

    while (l< a && r < b)
    {
        if (arr[l] == brr[r])
        {
            int count1 = 0, count2 = 0;
            int curr = arr[l];

            while (l < a && arr[l] == curr) 
            {
                count1++, l++;
            }

            while (r < b && brr[r] == curr) 
            {
                count2++, r++;
            }

            ans += (1LL * count1 * count2); 
        } 
        else if (arr[l] < brr[r]) 
        {
            l++; 
        } 
        else 
        {
            r++; 
        }
    }

    cout << ans << endl;

    return 0;
}
