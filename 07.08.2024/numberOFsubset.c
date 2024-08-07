#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int s;
	printf("Enter array size : ");
	scanf("%d",&s);
	if(s==0)
	{
		printf("Invalid input\n");
		exit(0);
	}
	printf("Enter %d elements : ",s);
	int arr[s];
	for(int i=0;i<s;i++)
		{
			scanf("%d",&arr[i]);
		}
	int n;
	n=pow(2,s);
	printf("%d\n",n);
	return 0;
		
}
