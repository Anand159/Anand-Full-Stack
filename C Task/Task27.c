#include<stdio.h>

int main()
{
    int num;
    int num2;
    int result = 0;

    printf("Please Enter Any Two Number ");
    scanf("%d %d",&num, &num2);

    result = num > num2 ? printf("True") : printf("False");
    
}