/* O(n) method for calculating no of substrings present in a string
also called hashing or rabin-karp algorithm
*/
#include<stdio.h>
#include<string.h>
int zxcvbn,dfgh,dfj;
long long int power(int a,int b)
{
	long long int p=1;
	for(int i=0;i<b;i++)
		p*=a;
	return p;
}
long long int hash(char a[],int s,int e)
{
	int i,t=0;
	long long int sum=0;
	//printf("%d %d\n",s,e);
	for(i=s;i<e;i++)
	{
		if(a[i] >= 'A' && a[i] <= 'Z'){
			sum += (((a[i])-64)*power(27,t++));    //convert all strings into numbers of base 27
			sum%=1000000007;
		}
		
		else{
			sum += (((a[i])-64)*power(27,t++));
			sum%=100000007;
		}
	}	
		return sum;

}
int main()
{
	char a[100],b[50];
	int count =0;
	scanf("%[^\n]s",a);
	scanf("%s",b);
	long long int p=hash(b,0,strlen(b));
	//printf("%lld",p);
	for(int i=0;i<=strlen(a);i +=strlen(b)){
		if(hash(a,i,i+strlen(b)) == p)
			count++;
	}
	/*int p=a[0]*2;
	printf("%d",p);*/
	printf("%d",count);
}
