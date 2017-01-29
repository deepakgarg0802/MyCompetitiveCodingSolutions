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
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
        // your code goes here
        if(grade<38){
            cout<<grade<<endl;
            continue;
        }
        int temp= (ceil(grade/5.0)) *5;
        //cout<<temp<<"  ";
        if(temp-grade<3){
            cout<<temp<<endl;    
        }
        else
            cout<<grade<<endl;
    }
    return 0;
}
