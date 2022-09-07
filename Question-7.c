#include<stdio.h>

int main()
{
    int unit;
    float total, s;

    printf("Enter the number of units consumed: ");
    scanf("%d", &unit);

    switch(unit<=50)
    {
        case 1:
            total=unit*0.50;
            break;
        case 0:
            switch (unit<=150)
            {
            case 1:
                total= (50*0.5) + (unit-50)*0.75;
                break;
            
            case 0:
                switch (unit<=250)
                {
                case 1:
                    total= (50*0.5) + (100*0.75) + (unit-150)*1.20;
                    break;
                
                case 0:
                    total= (50*0.5) + (100*0.75) + (100*1.20) + (unit-250)*1.50;
                    break;
                }
            break;
            }
        break;
    }

    s=total*0.20;
    total=total+s;

    printf("\nElectricity bill for %d units consumed is: Rs.%.2f", unit, total);

    return 0;

}