#include<stdio.h>

/**
 *main - size of data type
 *Description: reutrn size
 *Return: 0 if all is good
 */

int main(void)
{
int int_type;
char char_type;
long int long_int_type;
long long int long_long_int_type;
float float_type;

printf("Size of int: %zu byte\(s\)\n", sizeof(int_type));
printf("Size of char: %zu byte\(s\)\n", sizeof(char_type));
printf("Size of long int: %zu byte\(s\)\n", sizeof(long_int_type));
printf("Size of long long int: %zu\(s\)\n", sizeof(long_long_int));
printf("Size of float: %zu\(s\)\n", sizeof(float_type));

return (0);
}
