#include <iostream>
#include <algorithm>

using namespace std;

long long sum_n(long long n,long long d)
{
    long long x= (n*(n+1)*d) /2;
    return x;
}    
    
int main(){
    int t;
    long long ans,temp,x,y,z;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        n--;
        temp= (n-(n%3))/3;
        x= sum_n(temp,3);
        temp= (n-(n%5))/5;
        y= sum_n(temp,5);
        temp= (n-(n%15))/15;
        z=sum_n(temp,15);
        //cout<<x<<" ";cout<<y<<" ";cout<<z<<" ";
        cout<<x+y-z<<endl;
    }
    return 0;
}
