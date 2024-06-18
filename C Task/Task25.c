#include<stdio.h>
#include<string.h>

int main()
{
    char password[]="Anand";
    char input[20];
    do
    {
        printf("Please Enter the password : ");
        scanf("%s",&input);

    } while (strcmp(input,password)!=0);
    printf("Access Granted !");
    return 0;

}