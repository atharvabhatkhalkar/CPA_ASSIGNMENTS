#include <stdio.h> 
#pragma warning(disable:4996)


// for - summations 
int main(void)
{
    int i;
    int n;
    int k=1;

    puts("block 1");
    for (i = 0; i < 5; ++i)
        printf("i = %d\n", i);

    puts("block 2");
    for (i = 0; i <= 10; i = i + 2)
        printf("i = %d\n", i);

    puts("block 3");
    for (i = 1; i <= 10; i += 2)
        printf("i = %d\n", i);

    puts("block 4");
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter k:");
    for (i = 0; i < n; i += k)
        printf("i = %d\n", i);

    return (0);
}