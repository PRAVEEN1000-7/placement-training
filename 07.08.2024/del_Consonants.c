#include<stdio.h>
void main()
{
	char str[200],st[10];
	printf("Enter the input string : ");
	scanf("%s",str);

	printf("The output string : ");

	int j=0;
	for(int i=0;str[i]!='\0';i++)
		{
			if(str[i]=='a'||str[i]=='A'||str[i]=='i'||str[i]=='I'|| str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'||str[i]=='e'||str[i]=='E')
			{
				st[j++] = str[i];
			}
		}
	st[j] = '\0';
	printf("%s\n",st);
}
