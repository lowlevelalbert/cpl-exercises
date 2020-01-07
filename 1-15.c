/* Riscrivete il programma di conversione delle temperature utilizzando una funzione */
#include <stdio.h>

float FahrToCelsius(float d);

int main()
{
  for (double d = 0; d <= 300; d += 20)
    printf("%3.0f\t%6.3f\n", d, FahrToCelsius(d));
  return 0;
}

float FahrToCelsius(float d)
{
  return ((5.0/9.0) * (d - 32));
}
