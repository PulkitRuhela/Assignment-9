#include<stdio.h>

int main()
{
    int x, n;

    printf("1. For positive to negative: ");
    printf("\n2. For negative to positive: ");
    printf("\nEnter choice: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Enter the positive number: ");
        scanf("%d", &x);
        x=x*(-1);
        printf("\nThe negative of this number is %d", x);
        break;
    
    case 2:
        printf("\nEnter the negative number: ");
        scanf("%d", &x);
        x=x*(-1);
        printf("\nThe positive of this number is: %d", x);
        break;
    default:
        printf("Invalid.");
        break;
    }


    return 0;
}