#include <stdio.h>
#include <string.h>

int main()
{
    char name[3][10];
    char name2[3][10];
    printf("PLease Enter Any Name ");

    for (int i = 0; i < 3; i++)
    {
        scanf("%s", &name[i]);
    }
    printf("\nFirst Arrye :- ");
    for (int j = 0; j < 3; j++)
    {
        printf("%s ", name[j]);

        strcpy(name2[j], name[j]);

    }
    printf("\nSecond Arrye :- ");
    for (int x = 0; x < 3; x++)
    {
        printf("%s ", name2[x]);
    }

    return 0;
}