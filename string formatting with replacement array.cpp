#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

map<int,string> convrttoarr(string s){
    map<int,string> mymap;
    string a="";
    int count =0;
    int len = s.length();
    for(int i=0;i<len;++i)
    {
        string a="";
        while(i<len && s[i]!=' ')
        {
            a+=s[i];
            i++;
            
        }
        //cout<<i<<"--";
        mymap[count]=a;
        //cout<<mymap[count];
        //i++;
        count++;
    }
    
    return mymap;
}
int main(){
    
    int n,t,i,j,temp,n1,n2,count_braces=0,k;
    
    string rep_string, pos_string;
    string ans="";
    getline(cin,rep_string);
    //cout<<rep_string;
    getline(cin,pos_string);
    //cout<<pos_string;
    map<int,string> parsed= convrttoarr(rep_string);
    int len= pos_string.length();
    
    for(i=0;i<len;++i)
    {
        if(pos_string[i]=='{')
        {
            char index_string[1000];
            k=0;
            bool numeral=true;
            ++i;
            while(pos_string[i]!='}')
            {
                if(isalpha(pos_string[i]))
                {
                    numeral=false;
                }
                index_string[k]=pos_string[i];
                k++;
                i++;
            }
            
            if(k==0)
            {
                ans+=parsed[count_braces];
                ++count_braces;
            }
            else if(numeral==true)
            {
                int x=atoi(index_string);
                ans+=parsed[x];
            }
            else if(numeral==false)
            {
                ans+=index_string;
            }
            //cout<<ans<<endl;
        }
        else
            ans+=pos_string[i];
    }
   cout<<ans<<endl;
    
    return 0;
}
