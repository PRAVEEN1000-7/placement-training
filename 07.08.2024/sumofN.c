#include<stdio.h>
int main()
{
	int n,m[100],sum=0;
	printf("Enter how many values do you want to read : ");
	scanf("%d",&n);
	printf("Enter %d values : ",n);
	for(int i=0;i<=n;i++)
		{
			scanf("%d",&m[i]);
		}
	for(int i=0;i<=n;i++)
		{
			sum=sum+m[i];
		}
	printf("Sum of given values : %d\n",sum);
	return 0;
}
