#include <iostream>
#include<cmath>

using namespace std;

int isprime(int num)
{
	int flag=1;
	
	for(int i=2;i<= sqrt(num);++i)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	if(flag==1)
	{
		return 1;
	}
}


int main()
{
    int t,n,a[100000],i,j;
    cin>>t;
    
    while(t--)
    {
    	cin>>n;
    	for(i=0;i<n;++i)
    	{
    		cin>>a[i];
    		
    		if(isprime(a[i])==0)
    		{
    			a[i]=-1;
    		}
    	}
    	int max= a[0];
    	//find max
    	for(i=1;i<n;++i)
    	{
    		if(max<a[i])
    		{
    			max=a[i];
    		}
    	}
    	if(max>1)
    	{
    		cout<<max*max<<endl;
    	}
    	else{
    		cout<<"-1\n";
    	}
    }
    
    return 0;
}
