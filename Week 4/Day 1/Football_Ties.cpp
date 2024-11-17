#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int X,Y,count,count1,count2;
	    cin>>X>>Y;
        if(X==0 || Y==0)
        {
            count=0;
        }
	    else if((X==Y) && (X>=3 && Y>=3))
	    {
            count1=X%3;
            count2=Y%3;
            if(count1!=0 || count2!=0)
            {
                count=X%3;
            }
            else 
            {
	        count=0;
            }
	    }
        
	    
	    else if((X>Y || X<Y) && (X!=0 && Y!=0))
	    {
	        count1=X%3;
	        count2=Y%3;
	        if(count1==count2)
	        {
	            count=X%3;
	        }
	    }
        else if(X<3 && Y<3)
        {
            count=X;
        }
	    cout<<count<<endl;    
	}
}
