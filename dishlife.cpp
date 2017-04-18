#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,n,m,i,j,p,k;
    int all,some,bad,flag,x,temp,island_required;
    //bool a[MAX];//,island[MAX];
    set <int> island,a;
    set <int> :: iterator itr;
    cin>>t;
    
    while(t--){
        cin>>n>>k;
        //memset(a,0,sizeof(a));
        some=0;
        all=0;
        a.clear();
        
        for(i=0;i<n;++i)
        {
            cin>>p;
            
            island.clear();
            
            for(j=0;j<p;++j){
                cin>>temp;
                island.insert(temp);
            }
            
            x=1;
            /*for(itr=island.begin();itr!=island.end(); ++itr){
                cout<<*itr;
            }
            cout<<endl;*/
            for(itr=a.begin();itr!=a.end();++itr){
 
                //DEBUG(j);DEBUG(a[j]);
                if (island.find(*itr)==island.end())
                {
                    x=0; //a is not subset of new island
                }
                
            }
            //cout<<endl;
            if(i>=1 && x==1){
                some=1;
            }
            //DEBUG(some);
            
            island_required=0;
            for(itr=island.begin();itr!=island.end(); ++itr){
                if(*itr <=k && a.find(*itr)==a.end())  //island is not subset of a
                {
                    island_required=1;
                    a.insert(*itr);
                }
            }
            if(island_required==0)   //redundant island
                some=1;
            //DEBUG(some);
        }
        flag=1;
        for(i=1;i<=k;++i){
            if(a.find(i)==a.end())
                flag=0;
        }
        
        if(flag==0)
            cout<<"sad\n";
        else if(some==1){
            cout<<"some\n";
        }
        else
            cout<<"all\n";
    }
    
    return 0;
}    
