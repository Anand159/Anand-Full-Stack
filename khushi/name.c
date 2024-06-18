#include <stdio.h>
int main()
{
    char name[10];
    int age;
    printf("please enter your name = ");
    scanf("%s",name);
    printf("please enter your age = ");
    scanf("%d", &age);
    printf("my name is = %s",name);

    if (age >= 18)
    {
        printf("\nyou are adult");
    }
    else
    {
        printf("\nyou are not adult");
    }
}