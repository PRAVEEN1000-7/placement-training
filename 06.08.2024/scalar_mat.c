#include<stdio.h>
int main()
{
	int r,c,l;
	printf("Enter no of rows, columns: ");
	scanf("%d %d",&r,&c);
	printf("Enter the elements:\n");
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
					if(i==j && mat[i][j]==mat[0][0])
					{
						l++;
					}
				}
		}
	(l==r)?printf("Scalar matrix\n") : printf("Not a scalar matrix\n");
	return 0;
}
