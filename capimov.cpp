#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main(){
    int t,n,u,v,i,j,temp,x;
    vector < set<int> > link1;
    map <int,int,greater <int> > planet;
    map <int,int,greater <int> > :: iterator itr;
    set <int> myset;
    
    cin>>t;
 
    while(t--){
        cin>>n;
        link1.clear();
        planet.clear();
        myset.clear();
        
        myset.insert(-1);
        link1.push_back(myset);
        
        for(i=1;i<=n;++i){
            cin>>x;
            planet.insert(pair <int,int> (x,i));
            link1.push_back(myset);
        }
        for(i=1;i<=n-1;++i)
        {
            cin>>u>>v;
            link1[u].insert(v);
            link1[v].insert(u);
        }
        for(i=1;i<=n;++i)
        {
            for (itr = planet.begin(); itr != planet.end(); ++itr)
            {
                //DEBUG(itr->second);
                if((itr->second!=i) && link1[i].find(itr->second)==link1[i].end())
                {
                    cout<<itr->second<<" ";
                    break;
                }
            }    
        }
        cout<<endl;
    }
    return 0;
}  
