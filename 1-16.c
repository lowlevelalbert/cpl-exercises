/* Rivedete il main della linea più lunga in omodo che stampi la lunghezza di una linea arbitrariamente grande,
 oltre che la massima quantità possibile dei caratteri che la compongono.
  */

#include <stdio.h>

#define MAXLINE 1000                    // lunghezza massima di una linea: 1000 caratteri

int  getline(char line[], int maxline); // legge una linea, la salva e ne restituisce la lunghezza
void copy(char to[], char from[]);      // copia la stringa "from" nella stringa "to"

int main()
{
    int len;               // lunghezza della linea corrente
    int max;               // lunghezza massima
    char line[MAXLINE];    // buffer per la linea corrente
    char longest[MAXLINE]; // buffer per la linea più lunga

    max = 0;

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) // se cè almeno una stringa con lunghezza maggiore di 0
    {
        if (max > MAXLINE)
        {
            printf("line max length exceeded by  %d\n", max - MAXLINE);
            printf("line length: %d ", max);
        }
        printf("%s", longest);
    }
    return 0;
}

// legge una linea, la salva e ne restituisce la lunghezza
int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0'; // carattere nullo '\0' indica il termine delle stringhe in C
    return i;
}

void copy(char to[], char from[])
{
     int i = 0;
    while  ((to[i] = from[i]) != '\0')
     {
	  ++i;
     }
}
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
