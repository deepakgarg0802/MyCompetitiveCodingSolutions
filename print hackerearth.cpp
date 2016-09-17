#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[7] ={0},i,j,n; //h,a,c,k,e,r,t,
    string s;
    cin>>n;
    cin>>s;
    //cout<<s.size();
    for(i=0;i<(s.size());++i){
    	if(s[i]=='h'){
    		a[0]++;
    		//cout<<s[i]<<" "<<a[0];
    	}
    	else if(s[i]=='a')
    		a[1]++;
    	else if(s[i]=='c')
    		a[2]++;
    	else if(s[i]=='k')
    		a[3]++;
    	else if(s[i]=='e')
    		a[4]++;
    	else if(s[i]=='r')
    		a[5]++;
    	else if(s[i]=='t')
    		a[6]++;
    }
    a[0]= a[0]/2;
    a[1]= a[1]/2;
    a[4]=a[4]/2;
    a[5]=a[5]/2;
    
    
    j= INT_MAX;
    for(i=0;i<7;++i)
    {
    	if(a[i]<j)
    		j=a[i];
    }
    cout<<j<<endl;
    return 0;
}
