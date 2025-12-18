#include<stdio.h>

int main(){
    float celsius, fer;

    printf("enter temperature in celsius: ");
    scanf("%f", &celsius);

    printf("temperature in fer: %f", (celsius * 9/5) + 32);
}