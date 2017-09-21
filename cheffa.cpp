#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
map<vector<int>,bool> ans;
 
void fibo(int i,vector<int> a){
    
    ans[a]=1;
    /*for(int z=0;z<a.size();++z){
        cout<<a[z]<<" ";
    }
    cout<<endl;*/
    
    if(i>=a.size()-1){
        return;
    }
    fibo(i+1,a);
    
    if(a[i]==0){
        //fibo(i+1,a);
        return;
    }
    fibo(i+2,a);
    if(a[i+1]==0){
        //fibo(i+2,a);
        return;
    }
    
    /*if(i+1==a.size()-1){
        if(a[i+1]==0){
            return;
        }
        a[i]--;
        a[i+1]--;
        a.push_back(1);
        fibo(i,a);
        fibo(i+1,a);
        a[i]++;
        a[i+1]++;
        a.pop_back();
    }*/
    a[i]--;
    a[i+1]--;
    if(i+1==a.size()-1){
        a.push_back(1);
    }
    else{
        a[i+2]++;
    }
    fibo(i,a);
    /*a[i]++;
    a[i+1]++;
    a[i+2]--;*/
    return;
}
int main()
{
    int t,n,i,j,k;
    vector<int> a;
    //map<vector<int>,bool> ans;
    
    cin>>t;
    
    while(t--){
        cin>>n;
        a.clear();
        ans.clear();
        
        for(i=0;i<n;++i){
            cin>>k;
            a.push_back(k);
        }
        fibo(0,a);
        cout<<ans.size()<<endl;
        
    }
    return 0;
}  
