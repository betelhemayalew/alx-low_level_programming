#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * char *_strcat: cadena a copiar
 * @ dest: destino de la cadena.
 * Return: dest.
 */
char *_strcat(char *dest, char *src) {
    char *ptr = dest;
    while (*ptr != '\0') {
        ptr++;
    }
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}
char *_strcat(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
