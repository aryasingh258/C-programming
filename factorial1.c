#include <stdio.h>
int main()
{
    int i,num,a,value;
    printf("Give a number to print its factorial:\n ");
    scanf("%d", &num);
    for (value=num,i = 1; i < num; i++)
    {
        a = num * (num - i);
        value*= (a / num);
    }
    printf("Factorial of given number is:%d", value);

    return 0;
}