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
            printf("\\t");
        }
        else if (c == '\b')
        {
            printf("\\b");
        }
        else if (c == '\\')
        {
            printf("\\");
        }
        else
        {
            putchar(c);
        }
    }
    return (0);
}
