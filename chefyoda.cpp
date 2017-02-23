#include<bits/stdc++.h>
 
#define MAX 1000000
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
double coeff(int n,int k){
    double c[MAX]={0};
    int j;
    double x=1; //sum of binomial coefficients less than k
    
    c[0]=1;
    
    if(k<=n/2)
    {
        for(int i=1;i<k;++i)   // nCk= 1..k|^| (n+1-i)/i
        {
            c[i]=(c[i-1]/i)*(n+1-i);
            x+=c[i];
            //DEBUG(x);
        }
    }
    else{       //subtract last binomial coefficients from 2^n
        x= pow(2,n)-c[0];
        k=n-k+1;
        for(int i=1;i<k;++i)   // nCk= 1..k|^| (n+1-i)/i
        {
            c[i]=(c[i-1]/i)*(n+1-i);
            x-=c[i];
            //DEBUG(x);
        }
    }
    //cout<<endl;
    return x;
}
 
int main()
{
    int a,b;
    float k,n;
    int t;
    double ans,x=0;
    
    cin>>t;
    
    while(t--){
        cin>>a>>b>>k>>n;
        ans=0;
        if(k==0)//no need to win
        {
            ans=1;  
        }
        else if(a%2==0 && b%2==0) //chef wins
        {
            ans=1;
        }
        else if(a%2!=0 && b%2!=0) //yoda wins
        {
            ans=0;
        }
        
        else
        {
            ans= coeff(n,k); //P(X<k)
            ans=ans/pow(2,n);
            ans=1-ans;   //P(X>=k)
        }
        printf("%.6f\n",ans);
    }
    
    return 0;
}
