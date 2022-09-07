#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;

    printf("Enter the Month number: ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("\n31 Days.");
            break;
        case 2:
            printf("\n28/29 Days.");
            break;
        case 3:
            printf("\n31 Days.");
            break;
        case 4:
            printf("\n30 Days.");
            break;
        case 5:
            printf("\n31 Days.");
            break;
        case 6:
            printf("\n30 Days.");
            break;
        case 7:
            printf("\n31 Days.");
            break;
        case 8:
            printf("\n31 Days.");
            break;
        case 9:
            printf("\n30 Days.");
            break;      
        case 10:
            printf("\n31 Days.");
            break;
        case 11:
            printf("\n30 Days.");
            break;
        case 12:
            printf("\n31 Days.");
            break;
        default:
            printf("\nInvalid month.");
            break;
    }


    return 0;
}