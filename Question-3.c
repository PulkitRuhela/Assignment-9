#include<stdlib.h>

int main()
{
    int n;

    printf("Enter the Day number of the week: ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("\nHappy Monday");
            break;
        case 2:
            printf("\nHappy Tuesday");
            break;
        case 3:
            printf("\nHappy Wednesday");
            break;
        case 4:
            printf("\nHappy Thursday");
            break;
        case 5:
            printf("\nHappy Friday");
            break;
        case 6:
            printf("\nHappy Saturday");
            break;
        case 7:
            printf("\nHappy Sunday");
            break;
        default:
            printf("\nInvalid Day");
    }

    return 0;
}