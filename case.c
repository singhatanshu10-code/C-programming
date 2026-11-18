#include <stdio.h>
void main()
{
    printf("Hello World\n");
    char a;
    printf("Enter the a cahracter: ");
    scanf("%c",&a);
    if (a>='A' && a<='Z')
    {
        printf("The given character is an upper case");    

    }
    else if (a>='a' && a<='z')
    {
        printf("The given character is lower case");
    }
    else
    {
        printf("The given character is not an alphabet");
    }
}