/* scrivete un programma che stampi il suo input una parola per volta */
#include <stdio.H>

int main()
{
    char c = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
           c ='\n';
        }
        putchar(c);
    }

    return 0;
}
