#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findpositive(int *a,int n)
{
	int x=INT_MAX;
	//cout<<"size"<<n<<"\n";
	for(int i=0;i<n;++i)
	{
		//cout<<a[i]<<" ";
		if(a[i]>0 and a[i]<x)
		{
			
			x=a[i];
		}
	}
	//cout<<"\n Positive "<<x<<endl;
	if(x==INT_MAX)
		return -1;
	else
		return x;
}

int calc(int *arr,int size)
{
	int pt=0;
	/*for(int j=0;j<size;++j)
	{
		cout<<arr[j]<<" ";
	}
	cout<<endl;*/
	int minpositive=findpositive(arr,size);
	
	while(minpositive>0)
	{
		int count=0;
		for(int i=0;i<size;++i)
		{
			if(arr[i]-minpositive>=0)
			{
				arr[i]=arr[i]-minpositive;
				++count;
			}
		}
		if(count ==6)
		{
			pt= pt+4;
			count=0;
		}
		else if(count ==5)
		{
			pt= pt+2;
			count=0;
		}
		if(count ==4)
		{
			pt= pt+1;
			count=0;
		}
		minpositive= findpositive(arr,size);
	}
	return pt;
}
int findWinner(int* x,int size){
    int win1=0,win2=-1;
    int winpt= x[0];
    for(int i=1;i<size;++i)
    {
        if(winpt<=x[i])
			{
				winpt=x[i];
				win2=win1;
                win1=i;
			}
    }
    if(x[win1]==x[win2]){
        return -1;
    }
    else
        return win1+1;
}
int main() {
	// your code goes here
	int t,n,c=0,cookie[6],temp,points[105];
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		temp=0;
		memset(points,0,105);
		int winner=INT_MIN,winner_pt=INT_MIN;
		
		for(int i=0;i<n;++i)
		{
			cin>>c;
			//cout<<c<<endl;
			memset(cookie,0,sizeof(cookie));
			
			points[i]+=c;
			
			for(int j=0;j<c;++j)
			{
				cin>>temp;
				//cout<<temp;
				cookie[temp-1]++;
			}
			/*cout<<points[i]<<endl;*/
			int y=calc(cookie,6);
			points[i]+=y;
			//cout<<i<<" :"<<points[i]<<"\n";
            
		}
        winner=findWinner(points,c);
		if(winner==1)
			cout<<"chef\n";
        else if(winner==-1)
            cout<<"tie\n";
		else
			cout<<winner<<"\n";
	}
	return 0;
}
