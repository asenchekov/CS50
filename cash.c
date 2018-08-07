#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
//declaring the needed variables
    int coins = 0;
    float change;

//prompt for positive value
    do
    {
        change = get_float("Change owed: \n");
    }
    while (change < 0);
//make the input a round number
    change = change * 100;
    change = round(change);

    while (change >= 25)
    {
        change = change - 25;
        coins++;
    }
    while (change >= 10)
    {
        change = change - 10;
        coins++;
    }
    while (change >= 5)
    {
        change = change - 5;
        coins++;
    }
    while (change >= 1)
    {
        change = change - 1;
        coins++;
    }
    printf("%d\n", coins);
}

