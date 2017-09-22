int Solution::power(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified

    string res="";
    int c=0,flag=1;
    
    while(flag){
        flag=0;
        c=0;
        for(int i=0;i<A.size();++i){
            if(i!=A.size()-1 && A.at(i)!='0'){
                flag=1;
            }
            int x= A.at(i)-'0';
            //cout<<x<<" ";
            x= c*10 + x;
            res.push_back(x/2 + '0');
            c= x%2;
        }
        //cout<<res<<" ";
        if(c!=0){
            return 0;
        }
        A=res;
        res="";
    }
    int x= A.at(A.size()-1)-'0';
    if(x==1 || x==2 || x==4 || x==8)
        return 1;
}
