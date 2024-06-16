#include<stdio.h>

int main()
{
    int num[10];
    printf("Enter NUmber : ");
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\n**************\n");
    for(int j=0;j<10;j++)
    {
        printf("%d ",num[j]);
    }

    return 0;
}