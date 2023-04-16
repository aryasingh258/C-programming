#include <stdio.h>
int fibonacci(int number)
{
    if (number == 1)
    {
        return 0;
    }

    else if (number == 2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(number - 1) + fibonacci(number - 2));
    }
}
int main()
{
    int num;
    printf("WHICH TERM OF FIBONACCI SERIES YOU WANT: ");
    scanf("%d", &num);
    printf("%dth TERM IS %d", num, fibonacci(num));
    return 0;
}
