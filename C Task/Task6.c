#include<stdio.h>
#include<string.h>

int main()
{
    char name[10];
    char character;
    int flage=0;

    printf("Please Enter Any Name : ");
    scanf("%s",&name);
    printf("Name is :- %s",name);

    printf("\nPlease Enter Any Character Name : ");
    scanf(" %c",&character);

    for(int i=0;i<strlen(name);i++)
    {
        if(name[i]==character)
        {
            flage=1;
        }
    }

    if(flage==1)
    {
        printf("character is Matched");
    }
    else
    {
        printf("Unmatch");
    }

    return 0;
}