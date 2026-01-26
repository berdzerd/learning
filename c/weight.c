#include <stdio.h>

/*  prompt user for their weight in kg
    print corresponding weight in lb */

int main(void)
{
    double kg, lb; 

    do
    {
        printf("How much do you weigh (kg)? ");
        scanf("%lf", &kg);  // read an double decimal from user input
    }
    while (kg <= 0);

        lb = kg * 2.20462; // calculates lb
        printf("%.2f kg is %.2f lb\n", kg, lb);
}