#include "function_pointers.h"
#include <stdio.h>

#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @array: array of integers.
 * @size: size of the array.
 * @action: pointer to the function you need to use.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    for (size_t i = 0; i < size; i++)
        action(array[i]);
}

/**
 * print_int - prints an integer.
 * @n: integer to print.
 *
 * Return: void.
 */
void print_int(int n)
{
    printf("%d ", n);
}

/**
 * main - entry point.
 *
 * Return: 0 on success.
 */
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    array_iterator(arr, size, print_int);

    return (0);
}
