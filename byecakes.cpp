#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int  a[8],ans,amt,cake;
	float temp;
	
	while(1)
	{
		ans=cake=amt=INT_MIN;
		
		for(int i=0;i<8;++i)
		{	
			cin>>a[i];
		}
		
		if(a[0]==-1 && a[1]==-1 && a[2]==-1 && a[3]==-1 && a[4]==-1 && a[5]==-1 && a[6]==-1 && a[7]==-1)
		{
			return 0;
		}
		
		for(int i=0;i<4;++i)
		{	
			temp=a[i]; //to convert expression into float
			temp=ceil(temp/(float)a[i+4]);
			//cout<<temp<<";";
			cake= ceil(temp);	//ceil value
			//cout<<cake<<" ";
			if(amt< cake)
			{
				amt= cake;
				
			}
		}
		//cout<<amt<<endl;
		for(int i=0;i<4;++i)
		{	
			ans= (amt*a[i+4])-a[i];
			cout<<ans<<" ";
		}
		cout<<endl;	
	}
	
	return 0;
}
