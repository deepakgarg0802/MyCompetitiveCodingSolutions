#include<bits/stdc++.h>
 
#define MAX 1000001
#define ll long long
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
 
int main()
{
    //string str;
    char str[MAX];
    int i,j,k,t,less,equal,grtr,x;
    int ml,me,mg;
    scanf("%d",&t);
 
    while(t--){
        cin>>str;
        less=ml=equal=me=grtr=mg=0;
        k=1;
        char ch='=';
        
        
        less=1;
        for(i=0;str[i]!='\0';++i){
            if(str[i]!='='){
                ch=str[i];
                less++;
                break;
            }
        }
        for(i=i+1;str[i]!='\0';++i){
            if(str[i]!='='){
                if(str[i]==ch){
                    ++less;
                }    
                else{
                    ch=str[i];
                    if(k<less)
                        k=less;
                    less=2;
                }
            }
        }
        if(k<less)
            k=less;
        cout<<k<<endl;
    }
    return 0;
} 
