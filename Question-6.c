#include<stdio.h>

int main()
{
    int year, rem;

    printf("Enter year: ");
    scanf("%d", &year);

    rem=((year%4==0 && year%100!=0) || (year%100==0 && year%400==0));

    switch(rem)
    {
        case 1:
            printf("\nIt is a leap year.");
            break;
        case 0:
            printf("\nIt is not a leap year.");
            break;

        default:
            printf("Invalid year.");
            break;
    }
    return 0;
}