#include<stdio.h>

int main()
{

    int num[6];
    int num2[6];
    int arry2 = 0;

    printf("Please Enter Any Number ");

    for(int i=0;i<=5;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("\nElement Arry1 :- ");
    for(int j=0;j<=5;j++)
    {
        printf("%d ",num[j]);

        if(num[j]%2!=0)
        {
            num2[arry2]=num[j];
            arry2++;
        }
    }

    printf("\nElement Arry2 :- ");
    for(int i=0;i<arry2;i++)
    {
        printf("%d ",num2[i]);
    }

    return 0;
}