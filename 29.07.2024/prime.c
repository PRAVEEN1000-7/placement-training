#include<stdio.h>
int main()
{
	int x,i,j,k;
	printf("enter: ");
	scanf("%d",&x);
	
	for(i=0;i<=x;i++)
	{
		k=0;
		for(j=1;j<=x;j++)
		{
			if(i%j==0)
			{
				k++;
			}
		}
		if(k==2)
		{
			printf("%d",i);
		}
	}
	return 0;
}
