/* scrivete un programma che stampi un istogramma della
    lunghezza delle parole che riceve in input.
 */

#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORDS 1000


int main()
{
    int array[MAX_WORDS] = {0};
    int nc = 0;
    int wc = 0;
    char c;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || c != '\t' || c != '\n')
        {
            ++nc;
        }
        if (c == ' ' || c == '\t' || c == '\n')
        {
            array[wc++] = nc - 1;
            nc = 0;
        }
    }


    for (int i = 0; i < wc; i++)
    {
      printf("%d:\t", i + 1);
      for (int k = 0; k < array[i]; ++k)
	{
	  printf("#");
	}
      printf("\n");
    }

    return (0);
}
