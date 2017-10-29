#include<stdio.h>
int main()
{
	long long int X,Y,M,T,i,product;
	long long int array[1000002];
	if(scanf("%lld",&T)){};

	for(i=0;i<T;i++)
		{
			product=1;
			if(scanf("%lld%lld%lld",&X,&Y,&M)){};
	
			while(Y>0)
			{
				if(Y%2==1)
					{
						product=(product*X)%M;
					}
				Y=Y/2;
				X=(X*X)%M;
			}
			array[i]=product;
		}
	for(i=0;i<T;i++)
		{
			printf("%lld ",array[i]);
		}
	return 0;
}
