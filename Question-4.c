#include<stdlib.h>

int main()
{
    int n, a, b, c;

    while(1)
    {
    
    printf("\n\n1. This checks that the 3 numbers are sides of an isosceles triangle or not.");
    printf("\n2. This checks that the 3 numbers are sides of a right angled triangle pr not. ");
    printf("\n3. this checks that the 3 numbers are sides of an equilateral triangle or not.");
    printf("\n4. Exit.");

    printf("\n\nEnter your choice: ");
    scanf("%d", &n);
    

   
    switch(n)
        {
        case 1:
            printf("\nEnter the 3 numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            if(a+b>c && b+c>a && c+a>b)
                {
                if(a==b || b==c || c==a)
                    printf("\nIt is an Isosceles triangle.");
                else
                    printf("\nIt is not an Isosceles triangle.");
                }
            else
                {
                    printf("It is not a triangle");
                }
                break;
        case 2:
            printf("\nEnter the 3 numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            if(a+b>c && b+c>a && c+a>b)
                {
                if((a*a+b*b)==c*c || (b*b+c*c)==a*a || (c*c+a*a)==b*b)
                    printf("\nIt is a Right angled triangle.");
                else
                    printf("\nIt is not a Right angled triangle.");
                    break;
                }
            else
                {
                    printf("It is not a triangle");
                }
                break;
        case 3:
            printf("\nEnter the 3 numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            if(a+b>c && b+c>a && c+a>b)
                {
                if(a==b && b==c && c==a)
                    printf("\nIt is an Equilateral triangle.");
                else
                    printf("\nIt is not an Equilateral triangle.");
                    break;
                }    
            else
                {
                    printf("It is not a triangle");
                }    
                break;
        case 4:
                exit(0);

        }
    }
    
        printf("\nIt is not a triangle.");
    
    return 0;
}