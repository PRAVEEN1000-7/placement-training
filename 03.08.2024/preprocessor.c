#include<stdio.h>
#define zero 0
#define add(x,y) x+y
//#define concat(x,y) x##y
#define sub(x,y) x-y
/*#ifdef zero
    #define xx "x is defined"
#if x>y
    #define YY "x is greater than y"
#elif y>x
    #define YY "y is greater than x"
#else
    #define yy "equal"
#endif*/
typedef int num;
void main()
{
    num x,y;
    char xx[20],yy[20];
    printf("Enter 2 numbers : ");
    scanf("%d %d",&x,&y);
    printf("add = %d \n",add(x,y));
   //printf("concatenation = %d \n ",concat(x,y));
    printf("subtract = %d \n ",sub(x,y));
    //printf("%s\n%s",xx,yy);

}
