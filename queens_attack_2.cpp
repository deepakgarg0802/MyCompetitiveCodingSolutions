#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i,j,temp,ans=0;
    int k;
    cin >> n >> k;
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;
    
    pair <int,int> left, right,up,down, leftup,rightup,leftdown,rightdown;
    //first=row second=column
    
    left.first=right.first=rQueen;
    left.second=1;
    right.second=n;
    
    up.second=down.second=cQueen;
    up.first=n;
    down.first=1;
    
    temp= min(n-rQueen, cQueen-1);
    leftup.first=rQueen+temp;
    leftup.second=cQueen-temp;
    
    temp= min(rQueen-1, cQueen-1);
    leftdown.first=rQueen-temp;
    leftdown.second=cQueen-temp;
    
    temp= min(n-rQueen, n-cQueen);
    rightup.first=rQueen+temp;
    rightup.second=cQueen+temp;
    
    temp= min(rQueen-1, n-cQueen);
    rightdown.first=rQueen-temp;
    rightdown.second=cQueen+temp;
    
    /*cout<<leftup.first<<","<<leftup.second<<endl;
    cout<<up.first<<","<<up.second<<endl;
    cout<<rightup.first<<","<<rightup.second<<endl;
    cout<<right.first<<","<<right.second<<endl;
    cout<<rightdown.first<<","<<rightdown.second<<endl;
    cout<<down.first<<","<<down.second<<endl;
    cout<<leftdown.first<<","<<leftdown.second<<endl;
    cout<<left.first<<","<<left.second<<endl;
    cout<<ans<<endl;*/
    
    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        
        if(rObstacle==rQueen && cObstacle>cQueen) //obstacle is right
        {
            right.second=min(cObstacle-1,right.second);    
        }
        else if(rObstacle==rQueen && cObstacle<cQueen) //obstacle is left
        {
            left.second=max(cObstacle+1,left.second);    
        }
        else if(cObstacle==cQueen && rObstacle<rQueen) //obstacle is down
        {
            down.first=max(rObstacle+1,down.first);    
        }
        else if(cObstacle==cQueen && rObstacle>rQueen) //obstacle is up
        {
            up.first=min(rObstacle-1,up.first);    
        }
        else if(abs(rObstacle-rQueen)==abs(cObstacle-cQueen)) //obstacle is on diagonal
        {
            if(rObstacle<rQueen && cObstacle<cQueen)//leftdown
            {
                if(rObstacle+1>=leftdown.first){
                    leftdown.first=rObstacle+1;
                    leftdown.second=cObstacle+1;
                }    
            }   
            else if(rObstacle<rQueen && cObstacle>cQueen)//rightdown
            {
                if(cObstacle-1<=rightdown.second){
                    rightdown.first=rObstacle+1;
                    rightdown.second=cObstacle-1;
                }      
            }
            else if(rObstacle>rQueen && cObstacle<cQueen)//leftup
            {
                if(cObstacle+1>=leftup.second){
                    leftup.first=rObstacle-1;
                    leftup.second=cObstacle+1;
                }      
            }
            else if(rObstacle>rQueen && cObstacle>cQueen)//rightup
            {
                if(cObstacle-1<=rightup.second){
                    rightup.first=rObstacle-1;
                    rightup.second=cObstacle-1;
                }     
            }
        }
    }
    
    ans+=up.first-rQueen;
    ans+=rQueen-down.first;
    ans+=cQueen-left.second;
    ans+=right.second-cQueen;
    
    ans+=leftup.first-rQueen;
    ans+=rQueen-leftdown.first;
    ans+=rightup.first-rQueen;
    ans+=rQueen-rightdown.first;
    
    /*cout<<leftup.first<<","<<leftup.second<<endl;
    cout<<up.first<<","<<up.second<<endl;
    cout<<rightup.first<<","<<rightup.second<<endl;
    cout<<right.first<<","<<right.second<<endl;
    cout<<rightdown.first<<","<<rightdown.second<<endl;
    cout<<down.first<<","<<down.second<<endl;
    cout<<leftdown.first<<","<<leftdown.second<<endl;
    cout<<left.first<<","<<left.second<<endl;*/
    cout<<ans<<endl;
    return 0;
}
