/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: pointer to destination str
 * @src: pointer to source str
 * @n: integer
 *
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i;

	while (dest[dlen] != '\0')
		dlen++;

    for (i = 0; i < n; i++)
        *(dest + dlen + i) = src[i];
    if (i + 1 != n)
        *(dest + dlen + i + 1) = '\0';
    return (dest);
}

