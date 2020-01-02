/* scrivete un programma che conta gli spazi, i caratteri di tabulazione ed i new lines */
#include <stdio.h>

int main()
{
  int nspaces, ntabs, nlines;
  nspaces = ntabs = nlines = 0;
  int c;
  
  while ((c = getchar()) != EOF)
    {
      if (c == ' ')
	nspaces++;
      if (c == '\t')
	ntabs++;
      if (c == '\n')
	nlines++;
    }
  printf("spazi: %d\ttabulazioni: %d\tnew lines:%d\n", nspaces, ntabs, nlines);
  return (0);
  
}
