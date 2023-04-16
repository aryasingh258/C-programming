#include<stdio.h>
void prinstar()
{
    printf("*");
}
int main()
{
    int num,i=1,s;
    printf("enter a number");
    scanf("%d",&num);
    while (i<11)
    {  
       s=num*i;
       prinstar();
       printf("%d\n",s);
       i++;
    }
    
    return 0;
}
