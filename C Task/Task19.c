#include<stdio.h>
int main()
{
    int num[5];
    int num2[10];
    int arry2 = 0;

    printf("Enter Any Number ");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("\nFist arrye are :- ");
    for(int j=0;j<5;j++)
    {
        printf("%d ",num[j]);

        num2[arry2]=num[j];
        arry2++;
    }

    printf("\nSecond arrye are :- ");
    for(int i=0;i<arry2;i++)
    {
        printf("%d ",num2[i]);
    }

    
}