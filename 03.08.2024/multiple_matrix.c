#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;
    printf("Enter rolls and columns of matrix 1 : ");
    scanf("%d %d",&r1,&c1);
    int mat1[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
             scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter rolls and columns of matrix 2 : ");
    scanf("%d %d",&r2,&c2);
    int mat2[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
             scanf("%d",&mat2[i][j]);
        }
    }
    int Mat[r1][c2];
    for(i=0;i<r1;i++)
    {
         
        for(j=0;j<c2;j++)
        {
            Mat[i][j]=0;
             for(k=0;k<c1;k++)
             {
               Mat[i][j] = Mat[i][j] + mat1[i][k] * mat2[k][j];
             }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
             printf("%d ",Mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
