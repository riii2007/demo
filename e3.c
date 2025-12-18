#include<stdio.h>

int main(){
    int first,second,thrid;

    printf("enter first number: ");
    scanf("%d",&first);

    printf("enter second number: ");
    scanf("%d",&second);

    thrid=180-(first+second);
    printf("third angle is: %d",thrid);
}