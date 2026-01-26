#include <stdio.h>

// A neater version of the Temperature Conversion table
// Makes use of flaoting points and an argument for width
// in the printf table. 

int main(void)   //added void to see what changes.
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;  //Lower limit of temperature table
  upper = 300; //Upper limit
  step = 20;  //Step size
  
  printf("Temperature Conversion Table\n");
  printf("\n");
  printf("Celsius | Fahrenheit\n");

  fahr = lower;
  while (fahr<= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
