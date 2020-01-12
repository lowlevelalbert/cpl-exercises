// scrivete un programma per stampare tutte le linee di input che superano gli 80 caratteri
#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int len)
{
    char c;
    int i;
    for (i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
	line[i] = c;
    }
    if (c == '\n')
    {
	line[i] = c;
	++i;
    }
    line[i] = '\0';
    return(i);
}
    
int main()
{
    char line[MAXLINE];
    int lim = MAXLINE;
    int len;
    
    while (len = getline(line, lim) > 80)
    {
        printf("%s", line);
    }
    
    return 0;
}