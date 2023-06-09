#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
char *_strpbrk(char *s, char *accept);
char *_memset(char *s, char b, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strchr(char *s, char c);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
#endif
