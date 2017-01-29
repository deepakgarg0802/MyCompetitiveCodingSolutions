#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)

using namespace std;


int main(){
    char s[100000];
    int i,j,temp,k,len;
    bool num[10000001]={0};
    
    cin >> s;
    int n;
    cin >> n;
    len= strlen(s);
    
    for(i=0;i<len;++i){
        temp= s[i]-'a'+1;
        num[temp]=1;
        //cout<<temp<<"::"<<num[temp]<<" ";
        while(i+1<len && s[i+1]==s[i]){
            temp+= s[i+1]-'a'+1;
            num[temp]=1;
            //cout<<temp<<"::"<<num[temp]<<" ";
            ++i;
        }
    }
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        // your code goes here
        if(num[x]==1){
            cout<<"Yes\n";    
        }
        else{
            cout<<"No\n";    
        }
    }
    return 0;
}
