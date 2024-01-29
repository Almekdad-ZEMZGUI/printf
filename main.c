#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;
    len = _printf("%%\n");
    len2 = printf("%%\n");
    printf("%d\n%d", len, len2);

    return (0);
}
