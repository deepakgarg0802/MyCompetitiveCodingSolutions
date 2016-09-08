#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;
    long n;
    cin >> n;
    long long a[105]={0},ans=0,i,j,temp=0;
    int len= s.size();
    
    for(i=0;i<len;++i){
        if(s[i]=='a'){
            ++temp;
        }
        a[i]=temp;
        //cout<<a[i]<<" ";
    }
    
    ans= (n/len) *temp;
    //cout<<ans<<endl;
    if(n%len!=0)
        ans+= a[(n%len)-1];
    cout<<ans<<endl;
    
    return 0;
}
