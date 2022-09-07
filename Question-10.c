#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    float  disc, root1, root2;

    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);

    disc=b*b-4*a*c;

    switch(disc>0)
    {
        case 1:
        root1=(-b+pow(disc,1/2))/(2*a);
        root2=(-b-pow(disc,1/2))/(2*a);
        printf("\nRoots are real and unequal and roots are %f and %f", root1, root2);
        break;
        case 0:
        switch (disc==0)
        {
        case 1:
            root1=(-b+pow(disc,1/2))/(2*a);
            root2=(-b-pow(disc,1/2))/(2*a);
            printf("\nRoots are real and equal and roots are %f and %f", root1, root2);
            break;
        
        case 0:
            root1=(-b+pow(disc,1/2))/(2*a);
            root2=(-b-pow(disc,1/2))/(2*a);
            printf("\nRoots are imaginary and roots are %f and %f", root1, root2);
            break;
        default:
            printf("Invalid coefficients");
            break;
        }
        break;
    }



    return 0;
}