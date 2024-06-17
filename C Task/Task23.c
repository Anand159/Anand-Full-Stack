#include<stdio.h>


int main()
{
    int phy;
    int chem;
    int math;
    int division = 0;

    printf("Enter Phy Marks ");
    scanf("%d",&phy);
    printf("Enter Chem Marks ");
    scanf("%d",&chem);
    printf("Enter Math Marks ");
    scanf("%d",&math);

    if((phy>=0 && phy<=100)&&(chem>=0 && chem<=100)&&(math>=0 && math<=100))
    {
        division = (phy+chem+math)/3;

        if(division>=60)
        {
            printf("Fist Division");
        }  
        else if(division>=40 && division<60)
        {
            printf("Second Division");
        }
        else
        {
            printf("Third Division");
        }
    }
    else
    {
        printf("Error : Worng Enter Marks ");
        printf("Please Enter marks>=0 marks <=100");
    }

    return 0;
}