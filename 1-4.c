#include <stdio.h>

int main()
{
    printf("Tabella di corrispondenza Celsius - Fahrenheit\n");
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while (celsius <= upper)
    {
      fahr = (celsius * 9 / 5) + 32;
      printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
  }
}
