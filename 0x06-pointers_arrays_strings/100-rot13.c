#include "main.h"
/**
 * rot13 - encode str to rot13
 * @str: string
 *
 * Returns: str
 */
char *rot13(char *str)
{
    char *inputt = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int i = 0;
    int j;

    while (str[i] != '\0')
    {
        for (j = 0; j < 52; j++)
        {
            if (str[i] == inputt[j])
                str[i] = output[j];
        }
        i++;
    }
    return (str);
}

