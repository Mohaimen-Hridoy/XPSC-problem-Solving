#include<bits/stdc++.h>
using namespace std;
const long long int maxN=1000;
const long long int maxW=1000;

long long int dp[maxN][maxW];
long long int knapsack(long long int n,long long int weight[],long long int value[],long long int w)
{
    if(n==0 || w==0)
    {
        return 0;
    }
 
    if(dp[n][w]!=-1)
    {
        return dp[n][w];
    }

    if(weight[n]<=w)
    {
        long long int op1=knapsack(n-1,weight,value,w-weight[n])+value[n];

        long long int op2=knapsack(n-1,weight,value,w);

        dp[n][w]=max(op1,op2);
        return dp[n][w];
    }
    else
    {
        long long int op2=knapsack(n-1,weight,value,w);

        dp[n][w]=op2;
        return dp[n][w];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n,w;
    cin>>n;
    
    long long int weight[n];
    long long int value[n];

    for(long long int i=0;i<n;i++)
    {
        cin>>weight[i];
    }

    for(long long int i=0;i<n;i++)
    {
        cin>>value[i];
    }

    for(long long int i=0;i<n;i++)
    {
        for(long long int j=0;j<w;j++)
        {
            dp[i][j]=-1;
        }
    }

    cin>>w;

    cout<<knapsack(n,weight,value,w)<<endl;
    return 0;
}