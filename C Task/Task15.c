#include<stdio.h>

int main()
{
    int num[10];
    int Even[10];
    int arrye = 0;
    int Odd[10];
    int arryo = 0;
    printf("Please Enter Any Number ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }

    for(int j=0;j<10;j++)
    {
        if(num[j]%2==0)
        {
            Even[arrye]=num[j];
            arrye++;
        }
        else
        {
            Odd[arryo]=num[j];
            arryo++;
        }
    }

    printf("\nEven Number :- ");
    for(int i=0;i<arrye;i++)
    {
        printf("%d ",Even[i]);
    }

    printf("\nOdd Number :- ");
    
    for(int j=0;j<arryo;j++)
    {
        printf("%d ",Odd[j]);
    }

    return 0;
}