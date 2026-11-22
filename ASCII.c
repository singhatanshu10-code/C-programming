#include<stdio.h>
int main(){
    {
        printf("The ascii values with there character is:\n");
        for(char i='a';i<='z';i++){
            printf(" %d -> %c  \n",(int)i,i);
        }
        return 0;
    }
}