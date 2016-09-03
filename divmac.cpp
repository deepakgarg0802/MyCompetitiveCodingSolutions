#include <iostream>
#include<cmath>
#include<string.h>

#define MAX 100000

using namespace std;

int all_prime[1300]={0},count_prime=0;
bool prime[MAX];

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    //int n=MAX;
    //bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
       {
		  all_prime[count_prime]=p;
          ++count_prime;
      }
}

int LeastPrimeDivisor(int num)
{
	/*int i=2;
	if(num%i==0)
	{
		return i;
	}
	for(i=3;i<=sqrt(num);i+=2)
	{
		if(num%i==0)
			return i;
	}*/
	for(int i=0;i<count_prime;++i)
	{
		if(num%all_prime[i]==0)
			return all_prime[i];
	}
	return num;
}

void update(int *a, int size,int l,int r)
{
	for(int i=l;i<=r;++i)
		a[i] = a[i] / LeastPrimeDivisor(a[i]);
}

int get(int *a, int size,int l,int r)
{
	int result=1;
	
	for(int i=l;i<=r;++i)
		result = max(result, LeastPrimeDivisor(a[i]));
		
	return result;
}

int main() {
	// your code goes here
	int t,n,m,a[MAX],i,j,type,left,right;
	cin>>t;
	
	SieveOfEratosthenes();
	while(t--)
	{
		cin>>n>>m;
		
		for(i=0;i<n;++i)
		{
			cin>>a[i];
		}
		for(i=0;i<m;++i)
		{
			cin>>type>>left>>right;
			left--;
			right--;
			
			switch(type)
			{
				case 0 : update(a,n,left,right);
						 break;
				case 1 : cout<<get(a,n,left,right)<<" ";
						 break;
			}
		}
		cout<<"\n";
	}
	return 0;
}
