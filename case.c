#include <stdio.h>
int main()
{
   int marks;
   printf("enter the marks:");
   scanf("%d", &marks);

   switch (marks / 10)
   {
   case 10:
      printf("outstanding");
      break;
   case 9:
      printf("outstanding");
      break;
   case 8:
      printf("outstanding");
      break;
   case 7:
      printf("excellent");
      break;
   case 6:
      printf("excellent");
      break;
   case 5:
      
      switch (marks)
      {
      case 59:
         printf("excellent"); break;

      default: printf("good");
         break;
      }
     
      break;
   case 4:
      printf("good");
      break;

   default:
      printf("fail");
      break;
   }
   return 0;
}