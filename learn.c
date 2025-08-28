#include <stdio.h>

// print a farenheit-celsius table for fahr = 0, 20, ..., 300 //
int main (void)
{
    int fahr, celsius; // declares temperature units
    int lower, upper, step; // declares range and step amount

    lower = 0; // declares variable lower and assigns value
    upper = 300; // declares variable upper and assigns value
    step = 20; // declares the step amount and assigns a value

    fahr = lower; 
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9; // calculates celsius
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
