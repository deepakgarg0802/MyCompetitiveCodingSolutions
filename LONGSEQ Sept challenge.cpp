#include <iostream>
using namespace std;

int main() {
	// your code goes her
	
	int t,num1,num0,n;
	char str[100005];
	cin>>t;
	
	while(t--)
	{
		num1=num0=0;
		n=0;
		int i=0;
		cin>>str;
		while(str[i] != '\0')
		{
			//cout<<str[i];
			if(str[i]=='1')
				num1++;
			else if(str[i]=='0')
				num0++;
				
			n++;
			i++;
		}
		 if(num1==1 || num0==1)
		{
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";
		}
		
	}
	
	return 0;
}
