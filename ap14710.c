#include<stdio.h>
int main()
{
    printf ("Enter the value of no of digits: ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<3*n-1;i+=3)
    {
        printf(" %d ",i);

    }   
    return 0;
}