#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
float change;
int coins = 0;

do
{
    change = get_float("Enter the change owed");
}while (change<0);

float change_f = round (change*100);
int cents = change_f;

while (cents>=25)
{
cents = cents - 25;
coins++;
}

while (cents>=10)
{
cents = cents - 10;
coins++;
}

while (cents>=5)
{
cents = cents - 5;
coins++;
}

while (cents>=1)
{
cents = cents - 1;
coins++;
}

printf("Coins=%i", coins);
printf("\n");

}

