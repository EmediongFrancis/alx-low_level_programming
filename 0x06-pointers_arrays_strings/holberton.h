#ifndef HOLBERTON_H
#define HOLBERTON_H

/* concatenates two strings */
char *_strcat(char *dest, char *src);

/* concatenates two strings but uses at most n bytes*/
char *_strncat(char *dest, char *src, int n);

/* copies a string */
char *_strncpy(char *dest, char *src, int n);

/* compares two strings */
int _strcmp(char *s1, char *s2);

/* reverses content of array of integers */
void reverse_array(int *a, int n);

/* changes all lowercase letters of string to uppercase */
char *string_toupper(char *);

/* capitalizes all words of a string */
char *cap_string(char *);

/* encodes a function to a string into 1337 */
char *leet(char *);

/* encodes a string into rot13 */
char *rot13(char *);

/* prints an integer */
void print_number(int n);

/* adds two numbers */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* prints a buffer */
void print_buffer(char *b, int size);





#endif
