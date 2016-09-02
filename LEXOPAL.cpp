#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,j;
	char str[100000];
	cin>>t;
	
	while(t--)
	{
		cin>>str;
		
		for(i=0,j= strlen(str)-1; i<=j; ++i,--j)
		{
			if(str[i]=='.' && str[j]!= '.')
			{
				str[i]=str[j];
			}
			else if(str[i]!='.' && str[j]== '.')
			{
				str[j]=str[i];
			}
			else if(str[i]=='.' && str[j]== '.')
			{
				str[i]=str[j]='a';
			}
			else if(str[i]!=str[j])
			{
				strcpy(str,"-1");
				break;
			}
		}
		cout<<str<<endl;
	}
	return 0;
}
