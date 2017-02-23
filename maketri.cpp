#include<bits/stdc++.h>
 
#define MAX 1000000
#define DEBUG(x) do { std::cout << #x << ": " << x << "  "; } while (0)
using namespace std;
 
bool compareInterval(pair<long long, long long> i1, pair< long long, long long> i2)
{
    return (i1.first > i2.first);
}
 
long long calculate(vector < pair< long long, long long> > range)
{
    int length = 0;
    if(range.size()==1)
        return range[0].second-range[0].first+1;
    
    pair< long long, long long> currange;
    vector < pair< long long, long long> >::iterator it = range.begin();
    
    int index = 0; // Stores index of last element
    // in output array (modified arr[])
    int n= range.size();
    
    // Traverse all input Intervals
    for (int i=0; i<n; i++)
    {
        // If this is not first Interval and overlaps
        // with the previous one
        if (index != 0 && range[index-1].first <= range[i].second)
        {
            while (index != 0 && range[index-1].first <= range[i].second)
            {
                // Merge previous and current Intervals
                range[index-1].second = max(range[index-1].second, range[i].second);
                range[index-1].first = min(range[index-1].first, range[i].first);
                index--;
            }
        }
        else // Doesn't overlap with previous, add to
            // solution
            range[index] = range[i];
 
        index++;
        
    }
 
    // Now arr[0..index-1] stores the merged Intervals
    for (int i = 0; i < index; i++){
        //cout << "[" << range[i].first << ", " << range[i].second << "] ";
        length+= range[i].second-range[i].first+1;
    }
     return length;
}
 
long long min(long long x,long long y){
    return x>y?y:x;
}
long long max(long long x,long long y){
    return x<y?y:x;
}
int main()
{
    long long t,n,a[MAX]={0},i,j,l,r,x,y,ans=0,minimum,maximum;
    vector < pair<long long,long long> > line;
   
    //scanf("%d",&t);
    t=1;
    while(t--){
        scanf("%lld %lld %lld",&n,&l,&r);
        
        for(i=0;i<n;++i){
            scanf("%lld",&a[i]);
        }
        
        minimum= LLONG_MAX;
        maximum= 0;
        
        for(i=0;i<n;++i)
        {
            for(j=i+1;j<n;++j)
            {
                x= min(a[i],a[j]);
                y= max(a[i],a[j]);
                
                minimum=y-x+1; //min length of third side
                minimum=max(minimum,l);
                maximum= x+y-1;   // max length of third side
                maximum=min(maximum,r);
                if( maximum && minimum && maximum>=minimum)
                {
                    line.push_back(make_pair(minimum,maximum));
                    /*cout<<"i : "<<a[i]<<"j : "<<a[j]<<" ";
                    cout<<"min : "<<minimum<<"max: "<<maximum<<endl;*/
                }
            }
        }
        if(line.size()==0)
        {
            cout<<"0\n";
            return 0;
        }
        sort(line.begin(),line.end(),compareInterval);
        ans=calculate(line);
        
        cout<<ans<<endl;
    }
    
    return 0;
}   
