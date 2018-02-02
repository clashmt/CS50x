#include <stdio.h>
#include <cs50.h>
#include <math.h>


float umoney;
int cents;
int quarters = 0;
int dimes = 0;
int nickels = 0;
int pennies = 0;
int cc= 0;



int main(void)
{



    do
    {
        printf("Please give an amount money. Example: 1.00\n");
        umoney = get_float();
    }
    while (umoney < 0.00);


    cents = (int)(100 * umoney);
    //printf("%i\n", cents);
    cents = round(cents);
    //printf("%i\n", cents);

    while (cents >= 25)
    {
        quarters += 1;
        cents -= 25;
    }

    while (cents >= 10)
    {
        dimes += 1;
        cents -= 10;
    }

    while (cents >= 5)
    {
        nickels += 1;
        cents -= 5;
    }

    while (cents >= 1)
    {
        pennies += 1;
        cents -= 1;
    }

    cc = quarters + dimes + nickels + pennies;
    printf("%i\n", cc);


}

