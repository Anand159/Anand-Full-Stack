#include<stdio.h>

int main()
{
    int num;
    int fact = 1;
    printf("Please Enter Any Number ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        fact = fact * i;
    }

    printf("Factorial :- %d = %d",num,fact);

    return 0;
}