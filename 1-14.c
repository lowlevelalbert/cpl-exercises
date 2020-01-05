/* scrivete un programma che stampi un istogramma delle
   frequenze dei diversi caratteri presenti nel suo input
 */

#include <stdio.h>

#define OFFSET 32

int main()
{
    int freq[95] = {0};

    char c;
    while ((c = getchar()) != EOF)
    {
      if (c >= 32 && c <= 127)
	{
	  freq[c - 32] += 1;
	}

    }

    for (int i = 0; i < 95; i++)
    {
      printf("%c: %d\t", i + OFFSET, freq[i]);
    }
    return 0;
}
