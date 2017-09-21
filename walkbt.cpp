#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
void addone(string &s, int c){
    int i=s.length()-c-1;
    
    while(i>=0 && s.at(i)=='1'){
        s.at(i)='0';
        --i;
    }
    if(i>=0){
        s.at(i)='1';
    }
}
 
int lcp(string a,string b,int l){
    int i;
    for(i=0;i<a.length();++i){
        if(a.at(i)!=b.at(i)){
            break;
        }
        else
            l--;
    }
    return l;
}
int main()
{
    int t,n,i,q,j,c,k,prev,next;
    long long ans;
    set<string> a;
    set<string>:: iterator itr;
    set<string>:: reverse_iterator ritr;
    string x;
    char ch;
    
    cin>>t;
    
    while(t--){
        cin>>n>>q;
        a.clear();
        ans=1;
        x="";
        
        for(i=0;i<n;++i){
            x.push_back('0');
        }
        while(q--){
            cin>>ch;
            if(ch=='?'){
                cout<<ans<<endl;
            }
            else{
                cin>>c;
                addone(x,c);
                if(a.size()==0){
                    a.insert(x);
                    ans=ans+n;
                }
                else if(a.find(x)==a.end()){
                    a.insert(x);
                    itr= a.find(x);
                    
                    int dis= distance(a.begin(),itr);
                    
                    //ritr= a.find(x);
                    next=prev=INT_MAX;
                    
                    //ritr++;
                    if(dis>0 ){
                        itr--;
                        prev= lcp(*(itr),x,n);
                        itr++;
                    }
                    
                    itr++;
                    if(itr != a.end()){
                        next= lcp(*(itr),x,n);
                    }
                    ans= ans+min(prev,next);
                    //cout<<x<<" "<<prev<<" "<<next<<" "<<min(prev,next)<<endl;
                }
                //cout<<x<<endl;
            }
        }
        
    }
    return 0;
}  
