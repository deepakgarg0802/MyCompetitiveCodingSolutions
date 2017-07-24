#include<bits/stdc++.h>
 
#define MAX 1000000
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    //string str;
    char str[100];
    char ans[5][100];
    int i,j,k,t,l[5];
    
    scanf("%d",&t);
    gets(str);
    while(t--){
        /*cin.clear();
        cin.sync();
        getline(cin,str);*/
        
        l[0]=l[1]=l[2]=0;
        gets(str);
        k=0;
        /*ans[0].clear();
        ans[1].clear();
        ans[2].clear();*/
        
        for(i=0;str[i]!='\0';++i){
            str[i]=tolower(str[i]);
        }
        for(i=0;str[i]!='\0';++i){
            
            if(str[i]==' '){
                ans[k][0]=toupper(ans[k][0]);
                ans[k][1]='.';
                ans[k][2]='\0';
                ++k;
            }
            else{
                ans[k][l[k]++]=str[i];
            }
        }
        ans[k][l[k]++]='\0';
        ans[k][0]=toupper(ans[k][0]);
        for(i=0;i<=k;++i)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
} 
