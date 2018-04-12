#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //set a variable integer 'n' to an int entered by the user
    //for the height of the pyramid
    int n = get_int("Height: ");

    while (n < 0 || n >= 10)
    {
        style50 mario.cn = get_int("Height: ");
    }

    for (int rows = 2; rows <= n + 1; rows++)
    {
        for (int j = n + 1; j > rows; j--)
        {
            printf(" ");
        }

        for (int cols = 1; cols <= rows; cols++)
        {
            printf("#");
        }
        printf("\n");
    }

}