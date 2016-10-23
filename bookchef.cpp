#include<bits/stdc++.h>
 
#define MAX 100000
using namespace std;
 
struct post{
    int f;
    long long p;
    char str[101];
};
 
bool sorter(const post & x,const post & y){
    return (x.p>y.p);
}
int main(){
    int m,n,i,j,temp;
    long long x;
    char ch[102];
    vector <int> s;
    vector <post> a;
    post z;
    cin>>m>>n;
 
    for(i=0;i<m;++i){
        cin>>temp;
        s.push_back(temp);
    }
    for(i=0;i<n;++i){
        cin>>z.f;
        cin>>z.p;
        if(find(s.begin(), s.end(), z.f) != s.end())
            z.p= 100000*z.p;
 
        cin>>z.str;
        //cout<<z.str;
        a.push_back(z);
    }
    sort(a.begin(),a.end(),sorter);
    for(i=0;i<n;++i){
        cout<<a[i].str<<endl;
    }
    return 0;
}
