#include<stdio.h>


int main()
{
	int n,p,count;
	scanf("%d",&n);
	int a[100]={0};
	int b[100]={0};
	
	a[0] =1;
	while(n--)
	{	
		p=a[0];
		int k=0;
		int t=0;
		while(a[k]!=0)
		{
			count =0;
			
			while(p==a[k])
			{
				count++;
				k++;
				
			}	
			printf("%d%d",count,p);
			b[t++] = count;
			b[t++] =p;
			p=a[k];
			
		}
	int i;
	for(i=0;b[i]!=0;i++)
		{
			a[i]=b[i];
		}
	printf("\n");
	}
	return 0;

}



