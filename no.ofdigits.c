#include<stdio.h>
int main(){
    int n,t,c;
    printf("Enter a no.: ");
    scanf("%d",&n);
    t=n;
    while(t>0){
        c+=1;
        t=t/10;

    }
    printf("The no. of digits are: %d",c);
    return 0;
}