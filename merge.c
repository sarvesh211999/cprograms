#include<stdio.h>
long int a[100002];
int aqwrljqnwfnwf,adfjbaf,jafbkaf;
void combine(long int a[],long int l,long int m,long int r);
void merge(long int a[],long int l,long int r);
void read(long int a[],long int n)
{
	int i=0;
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
}
void display(long int a[],long int n)		
{
	int i=0;
	for(i=0;i<n;i++)
		printf("%ld ",	a[i]);
}
int main()
{
	long int n;
	scanf("%ld",&n);
	read(a,n);
	long int l=0,r=n-1;
	merge(a,l,r);
	display(a,n);
	return 0;
}
//For a recursive function, such as merge sort, we need to make the combine function for just one case
//which will be made when we assume when we have two sorted arrays to be combined into one
void combine(long int a[],long int l,long int m,long int r)
{
	long int L[100002],R[100002];
	long int i,j=0;
	for(i=0;i<=m;i++)
	{
		L[i]=a[l+i];
	}
	long int t=m+1;
	while(t<=r)
	{
		R[j++]=a[t++];
	}
	long int endR=j,k=l;
	i=0;j=0;
	while((i<=m-l)&&(j<endR))
	{
		if(L[i]>R[j])
		{
			a[k++]=R[j++];
		}
		else
			a[k++]=L[i++];
	}
	while(i<=m-l)
	{
		a[k++]=L[i++];
	}
	while(j<endR)
	{
		a[k++]=R[j++];
	}

}
//In merge sort, we keep dividing the array into two sub arrays, untill we have sub arrays having one element, then we call the combine function
void merge(long int a[],long int l,long int r)
{
	if(l<r)
	{
		long mid =l+(r-l)/2;       //better way to write mid when we handle cases of order of 10^9
		merge(a,l,mid);
		merge(a,mid+1,r);			//breaks array from l to mid and from mid to r
		combine(a,l,mid,r);
	}
}
