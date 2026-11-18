#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the values of a,b and c: \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("The largest no. is %d",a);
    }
    else if (b>a && b>c)
    {
        printf("The largest no. is %d",b);

    }
    else
    {
        printf("The largest no. is %d",c);

    }

}
