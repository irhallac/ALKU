#include <stdio.h>

/* Convert fahrenheit to celsius */
int main() 
{
  float fahrenheit;
  float celsius;

  printf("Enter a temp in fahrenheit: ");
  scanf("%f", &fahrenheit);
  celsius = (fahrenheit-32)/1.8;
  printf("%f degrees fahrenheit equals %f degrees celsius\n", fahrenheit, celsius);
}

