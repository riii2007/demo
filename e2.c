#include<stdio.h>
int main()
{
    int basicsalary,grosssalary,da,hra,ta,hraprc, daprc, taprc;
    printf("enter basic salary: ");
    scanf("%d", &basicsalary);
    printf("enter DA percentage: ");
    scanf("%d", &daprc);
    printf("enter HRA percentage: ");
    scanf("%d", &hraprc);
    printf("enter TA percentage: ");
    scanf("%d", &taprc);

    da = (daprc * basicsalary) / 100;
    hra = (hraprc * basicsalary) / 100;
    ta = (taprc * basicsalary) / 100;
    grosssalary = basicsalary + da + hra + ta;
    printf("gross salary is: %d", grosssalary);
}