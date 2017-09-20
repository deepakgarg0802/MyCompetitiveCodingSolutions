#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
struct comp{
    int sal,offer;
};
 
int main()
{
    int t,n,m,i,j,k,place;
    ll ans,total,badcmpny,pck;
    
    vector<int> mins;
    vector<comp> all;
    vector<string> qual;
    vector<bool> used;
    
    string s;
    
    scanf("%d",&t);
    
    while(t--){
        cin>>n>>m;
        
        mins.clear();
        all.clear();
        qual.clear();
        used.clear();
        
        total=ans=badcmpny=0;
        
        for(i=0;i<n;++i){
            cin>>k;
            mins.push_back(k);
        }
        for(i=0;i<m;++i){
            comp temp=  comp();
            cin>>temp.sal>>temp.offer;
            all.push_back(temp);
            used.push_back(0);
        }
        for(i=0;i<n;++i){
            cin>>s;
            qual.push_back(s);
        }
        
        for(i=0;i<n;++i){
            pck= INT_MIN;
            place=-1;
            for(j=0;j<m;++j){
                if(qual[i].at(j)=='1' && all[j].sal>=mins[i] && all[j].sal>pck && all[j].offer>0){
                    pck=all[j].sal;
                    place=j;
                }
            }
            if(place>=0){
                total= total+ all[place].sal;
                all[place].offer--;
                ans++;
                used[place]=1;
            }
            //cout<<i<<":"<<place<<endl;
        }
        for(i=0;i<m;++i){
            badcmpny+=used[i];
        }
        cout<<ans<<" "<<total<<" "<<m-badcmpny<<endl;
    }
    return 0;
}  
