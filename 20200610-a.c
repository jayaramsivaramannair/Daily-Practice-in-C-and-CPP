/*

An Electricity Utility Company charges its customers on the following basis depending
on the category they belong to and the units that they have consumed for the month

Category        Fixed Cost      Units Consumed      Price
----------------------------------------------------------

Residential     Rs. 50 / mth    0 to 100 units      Rs. 3.76 / unit
                for 1-phase     101 to 300 units    Rs. 7.21 / unit

                Rs. 200 / mth   301 to 500 units    Rs. 9.95 / unit
                for 3-phase     > 500 units         Rs. 11.31 / unit

Commercial      Rs. 220/mth     0 to 200 units      Rs. 6.60 / unit
                                > 200 Units         Rs. 9.62 / unit

Industrial      Rs. 250/mth     0 to 20 KW          Rs. 5.43 / unit
                                > 20 KW             Rs. 6.88 / unit

Agricultural    Rs. 340/mth     0 to 5 HP           Rs. 258/HP/Mth
                                > 5 HP              Rs. 360/HP/Mth


Write a program to calculate the monthly bill of the customer. Accept appropriate
input for each category of consumer along with meter number.

Problem Source: 101 C Programming Challenges - Challenge 18
*/


#include <stdio.h>

int main(int argc, char* argv[])
{
    int ch;
    float price = 0;
    int wronginput = 0;
    int meterType, numUnits, power;

    printf("Choose the type of Customer:\n");
    printf("1. Residential\n");
    printf("2. Commercial\n");
    printf("3. Industrial\n");
    printf("4. Agricultural\n");
    printf("Enter your choice:[1 or 2 or 3 or 4]\n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("Enter type of meter:\n");
            printf("1. Single Phase Meter\n");
            printf("2. Three Phase Meter\n");
            printf("Enter your choice:[1 or 2]\n");
            scanf("%d", &meterType);

            switch(meterType)
            {
                case 1:
                    price = price + 50;
                    break;
                case 2:
                    price = price + 200;
                    break;
                default:
                    wronginput = 1;
            }

            printf("Enter number of units consumed:\n");
            scanf("%d", &numUnits);

            if (numUnits >= 0)
            {
                if (numUnits <= 100)
                {
                    price = price + numUnits * 3.76;
                } else if (numUnits > 100 && numUnits <= 300)
                {
                    price = price + numUnits * 7.21;
                } else if (numUnits > 300 && numUnits <= 500)
                {
                    price = price + numUnits * 9.95;
                } else if (numUnits > 500)
                {
                    price = price + numUnits * 11.31;
                }
            } else
            {
                wronginput = 1;
            }
            break;
        case 2:
            price = price + 220;
            printf("Enter number of units consumed:\n");
            scanf("%d", &numUnits);

            if (numUnits >= 0)
            {
                if (numUnits <= 200)
                {
                    price = price + numUnits * 6.6;
                } else
                {
                    price = price + numUnits * 9.62;
                }
            } else {
                wronginput = 1;
            }
            break;
        case 3:
            price = price + 250;
            printf("Enter amount of power consumed:\n");
            scanf("%d", &power);

            if (power >= 0)
            {
                if(power <= 20)
                {
                    price = price + power * 5.43;
                } else {
                    price = price + power * 6.88;
                }
            } else {
                wronginput = 0;
            }
            break;
        case 4:
            price = price + 340;
            printf("Enter amount of horse power consumed:\n");
            scanf("%d", &power);

            if (power >= 0)
            {
                if (power <= 5)
                {
                    price = price + power * 258;
                } else {
                    price = price + power * 360;
                }
            } else {
                wronginput = 1;
            }
            break;
        default:
            wronginput = 1;
    }

    if (wronginput == 0)
    {
        printf("Total Electricity Bill = %f\n", price);
    } else {
        printf("Input not entered correctly\n");
    }

    return 0;
}