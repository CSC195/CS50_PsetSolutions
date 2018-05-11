/**get amount of change owed to the user and determine the minimum amount of change required to 
	to give back to the user */
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int coins = 0;
    float f = get_float("How much change is owed?");
    int cents = (round)(f * 100);

    printf("cents: %i\n", cents);

    while(cents >= 100)
    {
        cents -= 100;
        coins += 4;
    }

    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }

    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }

    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    printf("%i\n", coins);

}