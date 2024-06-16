#include<stdio.h>

int main()
{
    
    int num[5];
    printf("Please Enter Any Number : ");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("\n************\n");

    for(int j=0;j<5;j++)
    {
        printf("%d = %d\n",num[j],num[j]*num[j]*num[j]);
    }
    
    return 0;
}