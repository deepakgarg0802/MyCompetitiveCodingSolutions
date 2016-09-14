#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int LeastPrimeDivisor(pair<int,int> num)
{
	int i=2;
	if(num.first==1){
		return 1;
	}
	if(num.first%i==0)
	{
        return i;
	}
	for(i=3;i<=sqrt(num.first);i+=2)
	{
		if(num.first%i==0)
            return i;
	}
    return num.first;
}
 
void update(vector <pair<int,int> > &a, int size,int l,int r)
{
    for(int i=l;i<=r;++i){
        if(a[i].second==-1){
            a[i].second= LeastPrimeDivisor(a[i]);
        }
        
        a[i].first = a[i].first / a[i].second;
        a[i].second= LeastPrimeDivisor(a[i]);
        
    }
    /*for(int i=0;i<size;++i)
        printf("( %d ,%d),  ",a[i].first,a[i].second);
    cout<<endl;*/
}
 
int get(vector <pair<int,int> > &a, int size,int l,int r)
{
	int result=1;
	
	for(int i=l;i<=r;++i){
        if(a[i].second==-1){
            a[i].second= LeastPrimeDivisor(a[i]);
        }
		result = max(result, a[i].second);
    }
	return result;
}
 
int main() {
	// your code goes here
	int t,n,m,i,j,type,left,right,temp;
    vector <pair<int,int> > a;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>m;
		
		for(i=0;i<n;++i)
		{
			cin>>temp;
            a.push_back(pair <int,int> (temp,-1));
		}
		for(i=0;i<m;++i)
		{
			cin>>type>>left>>right;
			left--;
			right--;
			
			switch(type)
			{
				case 0 : update(a,n,left,right);
                         
						 break;
				case 1 : cout<<get(a,n,left,right)<<" ";
						 break;
			}
		}
		cout<<"\n";
        a.clear();
	}
	return 0;
} 
