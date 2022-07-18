/*The following prototype is a _putchar function*/
int _putchar(char c);

/* 0 a function that fills memorry with a constant byte*/
char *_memset(char *s, char b, unsigned int n);

/* 1 a function that copies memory area*/
char *_memcpy(char *dest, char *src, unsigned int n);

/* 2 a function that locates a character in a string*/
char *_strchr(char *s, char c);

/* 3 a function that gets the length of a prefix substring*/
unsigned int _strspn(char *s, char *accept);

/* 4 a function that searches a string for any set of bytes*/
char *_strpbrk(char *s, char *accept);

/* 5 a function that locates a substring*/
char *_strstr(char *haystack, char *needle);

/* 6 a function that prints the chessboard*/
void print_chessboard(char (*a)[8]);

/* 7 a function that prints the sum of the two diagonals of a square matrix of integers*/
void print_diagsums(int *a, int size);

/* 8 a function that sets the value of a pointer to a char*/
void set_string(char **s, char *to);

/* 9 to create a file that contains the password for the 'crackme2' executable*/
/*the file created is: 101-crackme_password which contains the password :abc123*/

