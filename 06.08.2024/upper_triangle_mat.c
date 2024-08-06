#include<stdio.h>
int main()
{
	int r,c,l;
	printf("Enter no of rows, columns: ");
	scanf("%d %d",&r,&c);
	printf("Enter elements of matrix:\n");
	int mat[r][c];
	for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				{
					scanf("%d",&mat[i][j]);
				}
		}
	for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				{
					if(i>j && mat[i][j]==0)
					{
						l++;
					}
				}
		}
	(l>=r)?printf("Upper triangular matrix\n") : printf("Not an upper triangular matrix\n");
	return 0;
}
