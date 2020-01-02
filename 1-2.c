#include <stdio.h>

int main()
{
  printf("\"Salve\tMondo\""); // \" doppio apice, \t tab
  printf("\\Salve\bMondo");   // \b backspace, \\ backslash(\))
  printf("\nSalve\nMondo\n");   // \n newline
  printf("\£ Salve!\n"); // warning: sequenza di escape sconosciuta
}
