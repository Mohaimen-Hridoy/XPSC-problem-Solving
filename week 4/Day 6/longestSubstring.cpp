#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int k;
    cin>>s>>k;

    if(k>26 || k<=0) 
    {
        cout<<"-1\n"; 
        return 0;
    }

    unordered_map<char,int> freq; 
    int maxLength=-1,left=0;

    for(int right =0;right<s.size();right++) 
    {
        freq[s[right]]++; 

        while(freq.size()>k) 
        {
            freq[s[left]]--;
            if(freq[s[left]]==0) 
            {
                freq.erase(s[left]); 
            }
            left++;
        }

        if (freq.size()==k) 
        {
            maxLength=max(maxLength,right-left+1);
        }
    }

    cout<<maxLength<<"\n";

    return 0;
}
