#include <stdio.h>

int main()
{
    int num[10];

    printf("Please Enter Any Number ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    int min = num[0];
    int max = num[0];

    printf("\nThe Element are :- ");
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", num[j]);

        if (num[j] < min)
        {
            min = num[j];
        }
        if (num[j] > max)
        {
            max = num[j];
        }
    }

    printf("\nMin Number %d ", min);
    printf("\nMax Number %d", max);

    return 0;
}