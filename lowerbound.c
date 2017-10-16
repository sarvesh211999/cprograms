#include<stdio.h>
//lower bound binary search where in we search the lowest occrence of a number that we are searching
int lbbs(int a[],int n,int num)
{
        int l=0,r=n-1,mid;
        while(l!=r)
        {
                mid = l+(r-l)/2;
                if(a[mid]>=num)
                        r=mid;
                else
                        l=mid+1;

        }
        return l;
}
int main()
{
	int n,num;
	int a[10000];
	scanf("%d %d",&n,&num);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int p = lbbs(a,n,num);
	printf("%d",p);
	return 0;
}
