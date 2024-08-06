#include<stdio.h>
int main()
{
	float m1,m2,m3,aver;
	scanf("%f\n%f\n%f",&m1,&m2,&m3);
	aver=(m1+m2+m3)/3;
	if(aver>=90)
	{
		printf("The grade is A\n");
	}
	else if(aver<90&&aver>80)
	{
		printf("The grade is B\n");
	}
	else if(aver<80&&aver>70)
	{
		printf("The grade is C\n");
	}
	else if(aver<70&&aver>60)
	{
		printf("the grade is D\n");
	}
	else if(aver<60&&aver>50)
	{
		printf("The grade is E\n");
	}
	else
	{
		printf("The grade is F\n");
	}
	return 0;
	
}
