### More pointers, arrays and strings

###### 0-strcat.c

a function that concatenates two strings.
Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the termina
ting null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest.

###### 1-strncat.c

Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest.

###### 2-strncpy.c

a function that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy.

###### 3-strcmp.c

a function that compares two strings.

Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp.

###### 4-rev_array.c

a function that reverses the content of an array of integers.

Prototype: void reverse_array(int *a, int n);
Where n is the number of elements of the array.

###### 5-string_toupper.c

a function that changes all lowercase letters of a string to uppercase.

Prototype: char *string_toupper(char *);

###### 6-cap_string.c

 a function that capitalizes all words of a string.

Prototype: char *cap_string(char *);
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, \", (, ), {,
and }

###### 7-leet.c

a function that encodes a string into 1337.

Letters a and A should be replaced by 4
Letters e and E should be replaced by 3
Letters o and O should be replaced by 0
Letters t and T should be replaced by 7
Letters l and L should be replaced by 1
Prototype: char *leet(char *);
You can only use one if in your code
You can only use two loops in your code
You are not allowed to use switch
You are not allowed to use any ternary operation.

###### 8-rot13.c

a function that encodes a string using rot13.

Prototype: char *rot13(char *);
You can only use if statement once in your code
You can only use two loops in your code
You are not allowed to use switch
You are not allowed to use any ternary operation.
