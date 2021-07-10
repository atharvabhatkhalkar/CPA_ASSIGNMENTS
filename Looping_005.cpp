#include <stdio.h> 
#pragma warning(disable:4996)

// looping : left shift 
int main(void)
{
    int i;
    int n=1;
    int k=1;

    puts("Block 1");
    for (i = 1; i < 256; i = i << 2)
        printf("i = %d\n", i);

    puts("Block 2");
    for (i = 1; i <= 256; i <<= 2)
        printf("i = %d\n", i);

    puts("Block 3");
    for (i = 1; i < n; i <<= k)
        printf("i = %d\n", i);

    puts("Block 4");
    for (i = 1; i <= n; i <<= n)
        printf("i = %d\n", i);

    return (0);
}