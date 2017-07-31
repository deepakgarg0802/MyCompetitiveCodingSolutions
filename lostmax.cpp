#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    int t,n,i,j,x,y,b,num,l1,l2;
    char str[100000];
    int a[1000005];
    int k,flag;
    char temp;
    char ch,sign;
    scanf("%d",&t);   
    getchar();
    
    while(t--){
        i=0;num=0;n=0;
        cin.getline(str,100000);
        
        l1= strlen(str);
        
        for(i=0;i<l1;++i){
            if(str[i]==' '){
                a[n]=num;
                ++n;
                num=0;
            }
            else{
                num= num*10+ (str[i]-'0');
            }
        }
        a[n]=num;
        
        n++;
        k=-1;
        flag=0;
        
        
        /*for(i=0;i<n;++i)
            cout<<a[i]<<" ";*/
        for(i=0;i<n;++i){
            if(flag==0 && n-1==a[i]){
                flag=1;
            }    
            else if(a[i]>k){
                k=a[i];
            }
        }
       cout<<k<<endl;
        //scanf("%c",&temp);
    }
    
    return 0;
} 
