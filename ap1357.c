#include<stdio.h>
int main()
{
    printf ("Enter the value of no of digits: ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<2*n;i+=2)
    {
        printf(" %d ",i);

    }   
    return 0;
}