#include<stdio.h>
#include<string.h>

int main()
{
    char name[10];
    int lenght = 0;

    printf("Please Enter Any Name ");
    scanf("%s",&name);
    printf("NAME :- %s",name);

    for(int i=0;i<strlen(name);i++)
    {
        lenght++;
    }

    printf("\nLenght is :- %d",lenght);

    return 0;
}