#include<stdio.h>
int main()
{
	int N,array[50000],digits,carry,i,j;
	int T,k;
	if(scanf("%d",&T)){};
	
	
	for(k=0;k<T;k++)
	{
		
		if(scanf("%d",&N)){};
				digits=0;
				carry=0;
				array[0]=1;	
				for(i=N;i>=2;i--)
					{
						for(j=0;j<=digits;j++)
							{
								carry=carry+(i*array[j]);
								array[j]=carry%10;
								carry=carry/10;
							}
						while(carry>0)
							{
								digits++;
								array[digits]=carry%10;
								carry=carry/10;	
							}
					}
			
				
				for(i=digits;i>=0;i--)
					{printf("%d",array[i]);}
					
				printf("\n");
				
				
	}	

	return 0;
}

	
	



















