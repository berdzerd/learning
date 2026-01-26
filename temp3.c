#include <stdio.h> 

//The inverse temperature table providing the results of celsius to fahrenheit.

int main(void)   //added void to see what changes.
{
  float celsius, fahr;
  int lower, upper, step;

  lower = 0;  //Lower limit of temperature table
  upper = 300; //Upper limit
  step = 20;  //Step size
  
  printf("Temperature Conversion Table\n");
  printf("\n");
  printf("Celsius| Fahrenheit\n");

  celsius = lower;
  while (celsius<= upper) {
    fahr = (9.0/5.0) * celsius+32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
