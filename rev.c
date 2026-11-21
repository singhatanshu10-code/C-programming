#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter a no to be reversed: ");
    scanf("%d",&n);
    while(n>0){
        c=c*10+(n%10);
        n=n/10;


    }
    printf("The revsered no. is%d\n",c);


    return 0;

}