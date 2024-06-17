#include<stdio.h>

int main()
{
    int num[5];
    int Sum = 0;
    int Multiply = 1;
    printf("Please Enter Any Number ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int j=0;j<5;j++)
    {
        Sum = Sum + num[j];
        Multiply = Multiply * num[j];
    }
    printf("\nSum is %d",Sum);
    printf("\nMultiply is %d",Multiply);
    return 0;
}