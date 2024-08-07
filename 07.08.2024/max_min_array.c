#include<stdio.h>
int max(int arr[],int n)
{
	int big=0;
	for(int i=0;i<n;i++)
		{
			if(arr[i]>big)
			{
				big=arr[i];
			}
		}
	return big;
}
int min(int arr[],int n,int m)
{
	int smal=m;
	for(int i=0;i<n;i++)
		{
			if(arr[i]<smal)
			{
				smal=arr[i];
			}
		}
	return smal;
}
int main()
{
	int n,m,i,maxi,mini;
	printf("Enter size of first and second arrays : ");
	scanf("%d %d",&n,&m);
	int arr1[n],arr2[m];
	printf("Enter first array elements : ");
	for(i=0;i<n;i++)
		{
			scanf("%d",&arr1[i]);
		}
	printf("Enter second array elements : ");
	for(i=0;i<m;i++)
		{
			scanf("%d",&arr2[i]);
		}
	maxi=max(arr1,n);
	mini=min(arr2,m,maxi);
	printf("max element in first array is %d and min element in second array is %d\n",maxi,mini);
	int prod=maxi*mini;
	printf("The product of these two is %d\n",prod);
	
	return 0;
}
