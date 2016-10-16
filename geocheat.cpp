#include<bits/stdc++.h>
 
#define MAX 100000
using namespace std;
 
 
int main(){
 
    vector< pair<int,int> > pt;
    long long dist,temp,prev,rough;
    int i,j,x,y,n;
 
    cin>>n;
    prev=0;
 
    for(int z=0;z<n;++z){
        cin>>x>>y;
        //cout<<x<<y<<endl;
        dist=0;
        //cout<<pt.size()<<endl;
        for(i=0;i<pt.size();++i)
        {
            rough= (x- pt[i].first);
            //cout<<rough<<" ";
            temp= rough*(x- pt[i].first);
            //cout<<temp<<" ";
            rough= (y- pt[i].second);
            //cout<<rough<<" ";
            temp+= rough*(y- pt[i].second);
            //cout<<temp<<" ------------";
            if(temp>dist){
                dist=temp;
            }
        }
        prev= (dist>prev ? dist : prev);
        pt.push_back(make_pair(x,y));
 
        cout<<prev<<endl;
    }
    //cout<<(long double 170)*(170)+(long double 1000000000*)1000000000;
    return 0;
}
