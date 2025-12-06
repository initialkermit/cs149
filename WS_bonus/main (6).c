#include <stdio.h>

int main(void) {

   int userNum, divNum;

    scanf("%d %d", &userNum, &divNum);

    printf("%d %d %d\n", userNum / divNum, userNum / divNum / divNum, userNum / divNum / divNum / divNum);

   return 0;
}
