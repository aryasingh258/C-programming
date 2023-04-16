#include <stdio.h>

int FACTORIAL(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * FACTORIAL(number - 1));
    }
}
int main()
{
    int num;
    printf("enter a number to find its factorial\n");
    scanf("%d", &num);
    printf("factorial is:  %d", FACTORIAL(num));
    return 0;
}