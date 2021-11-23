#include <stdio.h>


int main(void)
{
    int i; //represents rows
    int j; //represents columns
    int k; //represent spaces for right alignment
    int n; //represents the height
    do
    {
        n = printf("Height: ");
        scanf("%d", &n);
    }
    while (n > 8 || n <= 0);

    for (i = 1; i <= n; i++)
    {
        //prints spaces to right align the triangle

        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        //prints # for each row
        for (j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }



}