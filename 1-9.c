/* scrivete un programma che copi il suo input nel suo output sostituendo
   una stringa di uno o pi� spazi bianchi con uno spazio singolo
*/

#include <stdio.h>

int main()
{
    char c, prevc;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ') // se c � un spazio bianco
        {
            putchar(c);                      // stampalo
            prevc = c;                       // e salvalo in prevc
            while ((c = getchar()) == prevc)
	      ; // continua a prelevare caratteri dallo stream finche sono spazi bianchi
        }
        putchar(c);
    }
}
