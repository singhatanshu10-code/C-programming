#include <stdio.h>
void main()
{
    int sal,yr;
    printf("Enter the years of service and salary: \n");
    scanf("%d %d",&yr,&sal);
    if (yr>5)
    {
        if (sal<30000)
        {
            sal=sal+sal*0.1;
            printf("The new salary is %d",sal);
        }
        else
        {
            sal+=sal*0.05;
            printf("The new salary is %d",sal);

        }

    }
    else
    {
        printf("You are not eligible ");
    }


}