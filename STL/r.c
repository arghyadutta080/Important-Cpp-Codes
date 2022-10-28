#include <stdio.h>
void main()
{
    char str[] = "Hello";
    char *pstr = str;
    printf("\n The string is : ");
    while (*pstr != '\0')
    {
        printf("%c", *pstr);
        pstr++;
    }
    printf("\n");
}
