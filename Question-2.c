#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, a, b;

    while(1)
    {
        printf("\na. Addition");
        printf("\nb. Subtraction");
        printf("\nc. Multiplication");
        printf("\nd. Division");
        printf("\ne. Exit");

        printf("\n\nEnter your choice: \n");
        scanf("%d", &n);

    
        switch(n)
        {
        case 1:
            printf("\nEnter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Addition is: %d", a+b);
            break;
        case 2:
            printf("\nEnter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Subtraction is: %d", a-b);
            break;
        case 3:
            printf("\nEnter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Multiplication is: %d", a*b);
            break;
        case 4:
            printf("\nEnter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Division is: %d", a/b);
            break;
        case 5:
            exit(0);
            
        default:
            printf("Invalid choice.");
        }
    }


    return 0;
}
    
    