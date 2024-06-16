#include<stdio.h>

int main()
{
    int num[10];
    int num2[10];
    int arry2=0;
    printf("Enter Number : ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }

    for(int j=0;j<10;j++)
    {
        for(int k=j+1; k<10;k++)
        {
            if(num[j]==num[k])
            {
               num2[arry2]=num[k];
               arry2++;
            }
        }
    }

    printf("\nDuplicate Number :- ");
    for(int x=0;x<arry2;x++)
    {
        printf("%d ",num2[x]);
    }

}