#include <stdio.h>
#include <stdlib.h>
struct cour 
{
    char sub[30];
    int mar;
};
struct cour* allo(struct cour* ptr,int n)
{
    ptr=(struct cour*)malloc(sizeof(int));
    return ptr;
}
void rea(struct cour* ptr,int n)
{
 for(int i=0;i<n;i++)
 {
     printf("Enter %d sub name and mark : ",i+1);
     scanf("%s %d",ptr[i].sub,&ptr[i].mar);
 }
}
void dis(struct cour* ptr,int n)
{
 for(int i=0;i<n;i++)
 {
     printf("sub name and mark :%s %d\n",ptr[i].sub,ptr[i].mar);
 }
}
int main() {
    struct cour *ptr;
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    ptr=allo(ptr,n);
    
    rea(ptr,n);
    dis(ptr,n);
    return 0;
}
