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
    long long t,a[1000]={0},x;
    cin >> t;
    
    //for(t=1;t<100;++t)
    for(int i=0;;++i){
        long long temp= 3*(pow(2,i)) - 2;
        a[i]=temp;
        //cout<<a[i]<<" ";
        if(t< a[i]){
            //int x= a[i]-a[i-1];
            //x= x- (t-a[i-1]);
            x=a[i]-t;
            cout<<x<<endl;
            break;
        }
    }
    return 0;
}
