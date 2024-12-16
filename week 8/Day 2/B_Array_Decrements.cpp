#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        long long int brr[n];

        for(long long int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for(long long int i = 0; i < n; i++) {
            cin >> brr[i];
        }

        vector<long long int> v;  
        vector<long long int> v1; 

        for(long long int i = 0; i < n; i++) {
            if(brr[i] != 0) {
                v.push_back(arr[i] - brr[i]);
            } else {
                v1.push_back(arr[i] - brr[i]);
            }
        }

        bool flag = true;
        

        for(long long int i=0;i<n;i++)
        {
            if(arr[i]<brr[i])
            {
                flag=false;
                break;
            }
        }
        
        if(v.size()==1) 
        {
            if(arr[0]<brr[0])
            {
                flag=false;
            }
        }
        else if(v.size()>1)
        {
            for(long long int i = 0; i < v.size() - 1; i++) {
                if(v[i] != v[i + 1]) {
                    flag = false;
                    break;
                }
            }
        }

        sort(v1.begin(), v1.end());

        if(!v1.empty() && !v.empty() && v1.back() > v[0]) {
            flag = false;
        }


        if(flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
