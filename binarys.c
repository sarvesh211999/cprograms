#include<stdio.h>
int a[100001];
int count(int a[],int n,int max)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<max)
		c++;
	}
	printf("c %d max %d",c,max);
	return c;
}
int main()
{
	int n,max =-1,k;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		/*if(max<a[i])
		max =a[i];*/
	}
	
	int l=0,r=1000000000,mid=(l+r)/2,oldmid;
	while((l+1)<r)
	{
		
		int p=count(a,n,mid);
		if(p<k)
		{
			l= mid+1;
		}
		else if(p>=k)
		{
			r= mid;
		}
		mid =l+(r-l)/2;
	
	}
	printf("%d",mid);
	return 0;
}

	
	
						
