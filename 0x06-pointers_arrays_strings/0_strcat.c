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

int main() {
    char str1[98] = "Hello";
    char str2[] = "world!";
    _strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}
