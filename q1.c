#include<stdio.h>
int main()
{
	char S[100],T[100];
	scanf("%s",S);
	scanf("%s",T);
	int flag=1;
	int pos=-1;
	int k=-1;
	for(int i=0;S[i]!='\0';i++)
	{

		if(S[i]==T[0])
		{
			flag =0;
			k=i;
			for(int j=0;T[j]!='\0';j++)
			{
			
				if(S[k]!=T[j]);
				{
					flag=1;
					k++;
					break;

				}
			}
		}
	}
	if(flag ==1)
	{
		k=0;
	}
	printf("%d",k-1);
	//Use the method called rabin karp method of hashing where we convert the substring into an integer of base 26 
	//and then compare the integers. This will help to reduce the complexity to O(n).
	//
	
	
	return 0;
}
