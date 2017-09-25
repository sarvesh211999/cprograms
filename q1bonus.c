#include<stdio.h>
#include<string.h>
int main()
{
	char S[100],T[100];
	scanf("%s",S);
//	printf("%d",strlen(S));
/*	for(int i=0;i<strlen(S);i++)
		for(int j=0;j<=i;j++)
			for(int k=0;k<(i-j);k++)
				printf("%s\n",S[j+k]);*/
	for(int i=0;i<=strlen(S);i++)
                for(int j=0;j<=i;j++)
		{
			char end =S[i];
			S[i] ='\0';
			printf("%s \n",S+j);
			S[i]=end;
		}
	
//	printf("%d",k-1);
	return 0;
}
