/*Program to calculate the length of the longest common subsequence b/w 2 strings*/
#include<stdio.h>
int L[1000][1000];
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int string(char a[])
{
	int count=0;
	for(int i=0;a[i]!='\0';i++)
		count++;
	return count;
}
int length(char a[],char b[],int i,int j)	                //we create a 2-d array and update it if the words match or else its value becomes the max of the top and the left element
													
{
		
		if(i==0||j==0)
				L[i][j]=0;
		else if(a[i]==b[j])
				L[i][j]=1+length(a,b,i,j-1);
		else
				L[i][j]=max(length(a,b,i-1,j),length(a,b,i,j-1));	//the logic is we keep comparing the last element of 2 strings and keep updating the count
											//if they are unequal we get 2 cases 
	return L[i][j];									//for eg in case of abde ad abed we get 2 cases as follow up to first namely abe abde and abd abed
	
}
int main()
{
	char s1[10000],s2[10000];
	scanf("%s",s1);
	scanf("%s",s2);
	int p=length(s1,s2,string(s1),string(s2));
	printf("Longest common subsequence =%d",p);
}
