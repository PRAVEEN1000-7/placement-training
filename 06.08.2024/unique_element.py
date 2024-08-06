#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the array size :");
	scanf("%d",&n);
	if(n==0)
	{
		printf("Invalid Input\n");
		exit(0);
	}
	int arr[n];
	printf("Input %d elements in an array : ",n);
	for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	printf("The unique elements found in the array are : \n");
	int m;
		for(int i=0;i<n;i++)
			{
				m=0;
				for(int j=0;j<n;j++)
					{
						if(arr[i]==arr[j])
							{
								m++;
							}
					}
			if(m==1)
			{
				printf("%d ",arr[i]);
			}
			}
	printf("\n");
		return 0;
}
