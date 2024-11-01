#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin>>t;

    while(t--) 
    {
        string s; 
        cin>>s;

        string bestPassword=""; 
        int maxTime=0;

        for (char c='a';c<='z';c++) 
        {
            string newPassword=c+s; 
            int time=2;
            for(int i=1;i<newPassword.size();i++) 
            {
                if (newPassword[i]==newPassword[i-1]) 
                {
                    time+=1; 
                } 
                else 
                {
                    time+=2; 
                }
            }
            if(time>maxTime) 
            {
                maxTime=time;
                bestPassword=newPassword;
            }
        }

        for (int i = 0;i<s.size();i++) 
        {
            for (char c = 'a'; c <= 'z'; c++) 
            {
                string newPassword = s;
                newPassword.insert(i, 1, c); 
                int time = 2; 
                for (int j = 1; j < newPassword.size(); j++) 
                {
                    if (newPassword[j] == newPassword[j - 1]) 
                    {
                        time += 1; 
                    } else {
                        time += 2;
                    }
                }
                if (time > maxTime) {
                    maxTime = time;
                    bestPassword = newPassword;
                }
            }
        }

        for (char c = 'a'; c <= 'z'; c++) 
        {
            string newPassword = s + c; 
            int time = 2; 
            for (int j = 1; j < newPassword.size(); j++) 
            {
                if (newPassword[j] == newPassword[j - 1]) 
                {
                    time+= 1; 
                } 
                else 
                {
                    time+= 2; 
                }
            }
            if(time>maxTime) 
            {
                maxTime = time;
                bestPassword = newPassword; 
            }
        }

        cout<<bestPassword<<endl;
    }

    return 0;
}
