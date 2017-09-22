string getVal(int n,int place){
    
    string one,five,ten;
    string res;
    
    if(place==1){
        one="I";
        five="V";
        ten="X";
    }
    else if(place==10){
        one="X";
        five="L";
        ten="C";
    }
    else if(place==100){
        one="C";
        five="D";
        ten="M";
    }
    else if(place==1000){
        one="M";
        five="M";
        ten="M";
    }
    if(n==5){
        return five;
    }
    else if(n==0){
        return "";
    }
    else if(n==9){
        return ten+one;
    }
    else if(n==4){
        return five+one;
    }
    else if(n<4){
        for(int i=0;i<n;++i){
            res+=one;
        }
        return res;
    }
    else if(n>5){
        for(int i=5;i<n;++i){
            res+=one;
        }
        res+=five;
        return res;
    }
    
}
string Solution::intToRoman(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int x =A;
    string res;
    int dec=1;
    
    while(x){
        res+= getVal(x%10,dec);
        dec*=10;
        x/=10;
    }
    reverse(res.begin(),res.end());
    return res;
}
