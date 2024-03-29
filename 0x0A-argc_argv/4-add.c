#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: counts the arguments passed
 * @argv: array of pointers to pointers containing arguments passed
 * Return: int
 */

int main(int argc, char **argv)
{

    int i=0;
    int sum=0;

    if (argc <= 1)
    {
        printf("0\n");
    }
    else if ((*argv[i] >= 'a' && *argv[i] <= 'z') || (*argv[i] >= 'A' && *argv[i] <= 'Z'))
    {
        printf("Error\n");
        return (1);
    }
    else if (**argv > 0)
    {
        for (i = 1; i < argc; i++)
        {
            sum += atoi(argv[i]);

            if (i == argc - 1)
                printf("%d\n", sum);
        }

    }
    return (0);
}

