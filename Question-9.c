#include<stdio.h>

int main()
{
    int n;

    printf("Enter the even number: ");
    scanf("%d", &n);

    switch (n%2==0)
    {
    case 1:
        n=n+1;
        printf("\nThe upper nearest odd number is %d", n);
        break;
    
    case 0:
        printf("\nInvalid");
        break;
    }

    return 0;
}