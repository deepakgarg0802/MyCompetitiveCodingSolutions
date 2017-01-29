#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,q,l,r,x,i,j,min,sum;
    char ch;
    cin >> n >> q;
    vector<int> box(n);
    for(int box_i = 0; box_i < n; box_i++){
       cin >> box[box_i];
    }
    // your code goes here
    while(q--){
        cin>>ch;
        switch(ch){
            case '1': cin>>l>>r>>x;
                      for(i=l;i<=r;++i){
                          box[i]+=x;
                      }
                        break;
            case '2': cin>>l>>r>>x;
                      for(i=l;i<=r;++i){
                          box[i]= floor(box[i]/(float)x);
                          //cout<<box[i]<<" ";
                      }//cout<<endl;
                        break;
            case '3': cin>>l>>r;
                      min= box[l];
            
                      for(i=l+1;i<=r;++i){
                          if(min>box[i]){
                              min=box[i];
                          }
                      }
                        cout<<min<<endl;
                        break;
            case '4': cin>>l>>r;
                      sum= 0;
            
                      for(i=l;i<=r;++i){
                          sum+=box[i];
                      }
                        cout<<sum<<endl;
        }
    }
    return 0;
}
