#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a size :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values of array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }4
    
    int m;
    printf("values of array after duplicate elements removed :\n");
    for(i=0;i<n;i++)
    {
        m=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[i])
            {
                m++;
            }
        }
        if(m==1)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
