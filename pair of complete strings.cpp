#include <bits/stdc++.h>
using namespace std;
 
int count_complete(string x[],string y[],int len1,int len2){
	int *bits_x=new int[len1];
	int *bits_y=new int[len2];
 
	for(int i=0;i<len1;++i)
	{
		int len= (x[i]).length();
		for(int j=0; j<len; ++j)
		{
			int temp= x[i].at(j)-'a';
			bits_x[i]= bits_x[i] | (1<<temp);
		}
	}
 
	for(int i=0;i<len2;++i)
	{
		int len= y[i].length();
		for(int j=0; j<len; ++j)
		{
			int temp= y[i].at(j)-'a';
			bits_y[i]= bits_y[i] | (1<<temp);
		}
	}
	int complete=1,z=25;
	while(z--)
		complete=(complete<<1)+1;
 
	int count=0;
	for(int i=0;i<len1;++i)
	{
		for(int j=0;j<len2;++j)
		{
			if((bits_x[i] | bits_y[j]) == complete)
				count++;
		}
	}
	return count;
}
 
int main() {
	// your code goes here
 
	string s1[]={"abcdefgh", "geeksforgeeks",
                     "lmnopqrst", "abc"};
    string s2[]={"ijklmnopqrstuvwxyz",
                     "abcdefghijklmnopqrstuvwxyz",
                     "defghijklmnopqrstuvwxyz"};
	int m= sizeof(s1)/sizeof(s1[0]);
	int n= sizeof(s2)/sizeof(s2[0]);
 
 
	cout<<count_complete(s1,s2,m,n);
	return 0;
}
