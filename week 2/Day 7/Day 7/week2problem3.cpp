#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,b,c,i;
cin>>t;
for(i=1;i<=t;i++)
{
cin>>a>>b>>c;
if(a+b==c)
{
cout<<"+\n";
}
else if(a-b==c)
{
cout<<"-\n";
}
}
return 0;
}