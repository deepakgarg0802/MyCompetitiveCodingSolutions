#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int allone(char* z)
{
    int count=0;
    for(int i=0;i<26;++i){
        if(z[i]==1){
            ++count;
        }
    }
    if(count==26){
        return 1;
    }
    return 0;
}

int orer(char* x, char* y){
    
    for(int i=0;i<26;++i){
        if(x[i] || y[i]){
            x[i]=1;
        }
    }
    if(allone(x)==1)
        return 1;
    else
        return 0;
}

int main(){
    
    int n,t,i,j,temp,n1,n2,count=0;
    //int a[MAX];
    char a[10000][26]={{0}},b[10000][26]={{0}};
    char dp1[1000]={0},dp2[1000]={0};
    char str[1000];
    
    scanf("%d%d",&n1,&n2);
    
    for(i=0;i<n1;++i)
    {
        scanf("%s",str);
        for(j=0;j<strlen(str);++j)
        {
            a[i][str[j]-'A']=1;
        }
        dp1[i]=allone(a[i]);
        /*for(int f=0;f<26;++f){
            cout<<(char)(a[i][f]+'1');
        }
        cout<<endl;*/
    }
    for(i=0;i<n2;++i)
    {
        scanf("%s",str);
        for(j=0;j<strlen(str);++j)
        {
            b[i][str[j]-'A']=1;
        }
        dp2[i]=allone(b[i]);
        /*for(int f=0;f<26;++f){
            cout<<(char)(b[i][f]+'1');
        }
        cout<<endl;*/
    }
    
    for(i=0;i<n1;++i){
        for(j=0;j<n2;++j){
            
            if(dp1[i]==1 || dp2[j]==1)
                count++;
            else if(orer(a[i],b[j])==1){
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
