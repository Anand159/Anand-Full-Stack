#include<stdio.h>

int main()
{
    int age;
    int output = 0;
    printf("Enter Age : ");
    scanf("%d",&age);

    output = age>=18 ? printf("Adult") : printf("Unadult");

    return 0;

}