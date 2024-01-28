#include "main.h"

int main()
{
        int len, len2;

        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
        _printf("String:[%s]\n", "I am a string !");
        printf("String:[%s]\n", "I am a string !");
        len = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
        printf("Len:[%d %d]\n", len, len2);
        _printf("This is a test %%\n");
        printf("This is a test %%\n");
        return 0;
}
