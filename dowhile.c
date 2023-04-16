#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, table, i = 0;
    printf("give number whose table you want:");
    scanf("%d", &num);
    do
    {
        i = i + 1;
        table = num * i;
        printf("%d\n", table);

    } while (i < 10);

    return 0;
}
