#include <stdio.h> 
#pragma warning(disable:4996)
// looping : right shift 
int main(void)
{
    int i;
    int n=1;
    int k=1;

    puts("block 1");
    for (i = 256; i > 0; i = i >> 2)
        printf("i = %d\n", i);

    puts("block 2");
    for (i = n; i > 0; i >>= k)
        printf("i = %d\n", i);

    return (0);
}