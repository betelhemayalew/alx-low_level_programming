#include "main.h"
#include <stdio.h>

/**
 * char *_strcat - check the code
 *
 * Return: always dest 
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
    char str1[20] = "Hello";
    char str2[] = "world!";
    _strcat(str1, str2);
  char *_strcat(char *dest, char *src); ("%s\n", str1);
    return 0;
}
