#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter a no : ");
    scanf("%d",&n);
    while(n>0){
        c=c+(n%10);
        n=n/10;

    }
    printf("The no of digits are: %d",c);
    return 0;
}