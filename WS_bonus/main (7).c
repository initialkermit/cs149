#include <stdio.h>
#include <math.h>

int main(void) {
   double x;
   double y;
   double z;

   // read
   scanf("%lf %lf %lf", &x, &y, &z);

   // x to z
   printf("%0.2lf ", pow(x, z));
   
   // x to (y squared)
   printf("%0.2lf ", pow(x, pow(y, 2)));

   // absolute value of y
   printf("%0.2lf ", fabs(y));

   // square root of ((x times y) to the z)
   printf("%0.2lf\n", sqrt(pow((x * y), z)));

   return 0;
}
