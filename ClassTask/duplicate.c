#include <stdio.h>
int main()
{
    int arr[10] = {1, 1, 3, 1, 3, 1, 1, 1, 2, 1};
    int arr2[10];
    int arrye = 0;
    int count = 0;
    int matchingflage = 0;
    int lenght = sizeof(arr) / sizeof(arr[0]);

    printf("\nThe Element are :-\n");
    for (int i = 0; i < lenght; i++)
    {
        printf("%d ",arr[i]);
        for (int j = 1 + i; j < lenght; j++)
        {
            if (arr[i] == arr[j])
            {
                matchingflage = 0;

                for (int t = 0; t <= count; t++)
                {
                    if (arr[i] == arr2[t])
                    {
                        matchingflage = 1;
                    }
                }

                if (matchingflage == 0)
                {
                    arr2[arrye] = arr[i];
                    arrye++;
                    count++;
                }
            }
        }
    }
    printf("\n\nDuplicate Number :- \n");
    for(int x=0;x<arrye;x++)
    {
        printf("%d ",arr2[x]);
    }

    return 0;
}