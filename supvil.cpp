#include<bits/stdc++.h>
 
#define MAX 100000
#define DEBUG(x) do { std::cout << #x << ": " << x << std::endl; } while (0)
using namespace std;
 
 
int main(){
    int t,n,i,m,j,len;
    //vector < pair<int,int> > c;
    //int c[MAX]={0};
    char str[100];
    cin>>t;
    //t=1;
    while(t--)
    {
        cin>>n;
        i=j=1;
        int flag=0;
        while(n--)
        {
            cin>>str;
            len=strlen(str);
            
            //superhero or villain
            if(flag==0)
            {
                if(str[len-1]=='n' && str[len-2]=='a' && str[len-3]=='m'){
                    i++;
                }
                else
                    j++;
 
                if(i-j >=2){
                    flag=1;
                    cout<<"superheroes\n";
                    //break;
                }
                if(j-i >=3){
                    flag=1;
                    cout<<"villains\n";
                    //break;
                }
            }
            
        }
        if(flag==0)
        {
            cout<<"draw\n";
        }
    }
    return 0;
}   
