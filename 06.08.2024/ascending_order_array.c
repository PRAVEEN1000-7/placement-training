#include<stdio.h>
int main()
{
	int n;
	printf("Enter how many values you want to read : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		{
			printf("Enter the value of a[%d] : ",i);
			scanf("%d",&arr[i]);
		}
int temp;
	for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
				{
					if(arr[i]>arr[j])
					{
						temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
		}
	printf("Array sorted in ascending order = ");
	for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
	printf("\n");
	return 0;
}
