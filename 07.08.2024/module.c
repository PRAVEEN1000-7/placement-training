#include <stdio.h>
#include "maximumOfNum1.c"
void main() {
	int x, y, z, max;
	printf("Enter three numbers : ");
	scanf("%d%d%d", &x, &y, &z);
	printf("%d is the largest among three numbers\n", largest(&x, &y, &z));
}
#----------------------------------------------------------------------------------------
# maximumOfNum1.c
int largest(int *x,int *y,int *z)
{
	if(*x>*y&&*x>*z)
	{
		return *x;
	}
	else if(*y>*z)
	{
		return *y;
	}
	else
	{
		return *z;
	}
}
