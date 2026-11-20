#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            count=1;
            break;
        }
    }


    if (count==0)
    {
        printf("The given no. is prime");

    }

    else
    {
        printf("not a prime no.");

    }
    return 0;
}
