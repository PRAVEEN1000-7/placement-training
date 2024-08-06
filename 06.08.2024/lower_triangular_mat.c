#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter no of rows, columns: ");
	scanf("%d %d",&r,&c);
	int mat[r][c];
	printf("Enter elements of matrix:\n");
	for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				{
					scanf("%d",&mat[i][j]);
				}
		}
	int l=0;;
	for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				{
					if(j>i && mat[i][j]==0)
					{
						l++;
					}
				}
		}
			(l>=3)?printf("Lower triangular matrix\n") : printf("Not a lower triangular matrix\n");
	return 0;
}
