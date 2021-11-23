#include <stdio.h>

int main(void)
{

    int n; //initial number of llamas;
    int f; // final number of llamas;
    int b; //llamas born each year;
    int d; //llamas dead each year;
    int y; // years needed.


    /* this do while loop prompts the user to enter an initial number of llamas with a condition,
    if the condition is not satisfied, the user is prompted repeatedly until the condition is satisfied.*/

    do
    {
        n = printf("Enter initial number of llamas: \n");
            scanf("%d", &n);


    }
    while (n < 9);

    /* this do while loop prompts the user to enter the final number of llamas with a condition,
    if the condition is not satisfied, the user is prompted repeatedly until the condition is satisfied.*/
    do
    {
        f = printf("Enter final number of llamas: \n");
            scanf("%d", &f);


    }
    while (f < n);

    /* This for loop checks the way the population of llamas grows and increments the year count until
    the population reaches the final number of llamas entered by the user */

    for (y = 0; n < f; y++)
    {
        b = n / 3;
        d = n / 4;
        n = n + (b - d);

    }
// prints the number of years it takes to go from the initial to the final number of llamas.
    printf("Years: %i\n", y);



}