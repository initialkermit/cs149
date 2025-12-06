#include <stdio.h>

int main(void) {
   int userNum;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   
   printf("You entered: %d\n", userNum);

   int squared = userNum * userNum;
   int cubed = squared * userNum;

   printf("%d squared is %d\n", userNum, squared);
   printf("And %d cubed is %d!!\n", userNum, cubed);

   int anotherNum;
   printf("Enter another integer:\n");
   scanf("%d", &anotherNum);

   int sum = userNum + anotherNum;
   int product = userNum * anotherNum;

   printf("%d + %d is %d\n", userNum, anotherNum, sum);
   printf("%d * %d is %d\n", userNum, anotherNum, product);



   return 0;
}