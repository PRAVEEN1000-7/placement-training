#include <stdio.h>
#include <string.h>

int main()
{
    char x[10];
    printf("Enter the string : ");
    gets(x);
    int y=strlen(x);
    int z;
    for(int i=0;i<y;i++)
    {
        z=1;
        for(int j=i+1;j<y;j++)
        {
            if(x[i]==x[j])
            {
                z++;
                x[j]='*';
            }
        }
        if(x[i]!='*')
        {
        printf("%c = %d\n",x[i],z);
        }
    }
    
}
