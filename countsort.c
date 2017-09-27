/*
Program to implement count array which sorts on the basis of frequency
*/
#include<stdio.h> 
void read(int a[],int n)
{
        for(int i=0;i<n;i++)
        {
                scanf("%d",&a[i]);

        }

}
int maxi(int a[],int n)     //implements max function
{
        int max=0;
        for(int i=0;i<n;i++)
        {
                if(max<a[i])
                        max=a[i];
        }
        return max;
}
void countsort(int a[],int n,int max)
{
        int count[1000];
        int c[1000];
        for(int i=0;i<n;i++)       //count the number of occurences
        {
                count[a[i]]++;

        }
        int k=0;
        for(int i =1;i<=max;i++)
        {
                for(int j=0;j<count[i];j++)
                        c[k++]=i;
        }
        for(int i=0;i<k;i++)     //in the new array we store as per the number of occurences per index
                printf("%d ",c[i]);
}
int main()
{
        int a[1000],n;
        scanf("%d",&n);
        read(a,n);
        int max =maxi(a,n);
        countsort(a,n,max);
        return 0;
}


