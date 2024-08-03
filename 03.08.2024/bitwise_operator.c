
int main()
{
    int x,y,z;
    printf("Enter 2 numbers :\n");
    scanf("%d %d",&x,&y);

    /*using bitwise operator*/
    printf("choose operator :");
    char c;
    scanf("%c",&c);

    switch(c)
    {
    case '&':
        z = x & y;
        break;
    case '|':
        z = x | y ;
        break;
    default:
    printf("invalid bitwise operator\n");
        break;
    }
    printf("value with purpose of bitwise %c operator is : %d\n",c,z);
    return 0;
}
