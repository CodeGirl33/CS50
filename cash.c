#include <stdio.h>
#include <math.h>

float n; //user input
int change; //input in cents
int quarters, dimes, nickels, pennies; //coins given as change

int main(void)
{

    //taking input from user
    do
    {
        n = printf("Change owed: ");
            scanf("%f", &n);
    }

    while (n <= 0);

    //transforming input into cents
    change = round(n * 100);
    printf("%i\n", change);

    //counting min number of coins needed to give change
    //must divide by 25/10/5/1

    while (change >= 25)
    {
        change = change - 25;
        quarters++;
    }

    while (change >= 10)
    {
        change = change - 10;
        dimes++;
    }

    while (change >= 5)
    {
        change = change - 5;
        nickels++;
    }

    while (change >= 1)
    {
        change = change - 1;
        pennies++;
    }

    int total = (quarters + dimes + nickels + pennies);
    printf("%i\n", total);

}