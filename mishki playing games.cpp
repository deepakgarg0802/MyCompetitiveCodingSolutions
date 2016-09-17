#include <stdio.h>

int l2(int v)
{
	int r=0;
	if(v &  0xFFFF0000)
    {
        v >>=16;
        r = 16;
    }
    if(v &  0xFF00)
    {
        v >>=8;
        r |= 8;
    }
    if(v &  0xF0)
    {
        v >>=4;
        r |= 4;
    }
    if(v &  0xC)
    {
        v >>=2;
        r |= 2;
    }
    if(v &  0x2)
    {
        v >>=1;
        r |= 1;
    }
    return r;
    
}

int main() {
	// your code goes here
	int n,q,a[1000000],l,r,i,j,temp,ans;
	scanf("%d%d",&n,&q);
	
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
		//a[i]= (log(a[i])/log(2)) +1;
	}
	
	while(q--)
	{
		scanf("%d%d",&l,&r);
		l--;
		r--;
		j=0;
		
		for(i=l;i<=r;++i)
		{
			if(a[i]>0)
			{
				a[i]= l2(a[i]) +1;
				printf("%d ",a[i]);
				//cout<<a[i]<<" ";
				//a[i]= (log(a[i])/log(2)) +1;
				a[i]=-a[i];		//to keep track of visited elements
			}
			j= j+a[i];
		}
		j=-j;
		if(j%2!=0)
		{
			printf("Mishki\n");
		}
		else
		{
			printf("Hacker\n");
		}
	}
	return 0;
}
