#include<stdio.h>
int main()
{
	int n,m[100],l[100];
	printf("Enter how many values you want to read : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		{
			printf("Enter the value of a[%d] : ",i);
			scanf("%d",&m[i]);
		}
	for(int i=0;i<n;i++)
		{
			printf("Enter the value of b[%d] : ",i);
			scanf("%d",&l[i]);
		}
	for(int i=0;i<n;i++)
		{
			if(m[i]==l[i])
			{
				printf("Both arrays are equal\n");
				break;
			}
			else
			{
				printf("Both arrays are not equal\n");
				break;
			}
		}
	return 0;
}
