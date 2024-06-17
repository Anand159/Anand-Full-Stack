#include<stdio.h>

int main()
{
    int roll[3];
    char name[3][10];
    char address[3][10];

    for(int i=0;i<3;i++)
    {
        printf("Enter Student Roll :- ");
        scanf("%d",&roll[i]);
        printf("Enter Student Name :- ");
        scanf("%s",&name[i]);
        printf("Enter Student Address :- ");
        scanf("%s",&address[i]);
    }
    printf("\n*****************************\n");
    for(int j=0;j<3;j++)
    {
        printf("\nStudent Roll :- %d",roll[j]);
        printf("\nStudent Name :- %s",name[j]);
        printf("\nStudent Address :- %s",address[j]);
    }

}