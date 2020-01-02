/*
 * Scrivete un programma che copi il suo input sul suo output,
 * sostituendo ogni carattere di tabulazione con '\t' ogni
 * backspace con '\b' ed ogni backslash con '\\'
 */

#include <stdio.h>

int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
	  putchar(0x5C);
	  putchar('t');
        }
        else if (c == 0x8)
        {
	  putchar(0x5C);
	  putchar('b');
        }
        else if (c == 0x5C)
        {
	  putchar(0x5C);
	  putchar(0x5c);
        }
        else
        {
            putchar(c);
        }
    }
    return (0);
}
