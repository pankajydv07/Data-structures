#include <stdio.h>
int power(int base, int exp) {
   int result = 1;
   for (int i = 0; i<exp;i++) {
       result*= base;
   }
   return result;
}
int main() {
   int base, exp, result;
   printf("Enter the base value: ");
   scanf("%d", &base);

   printf("Enter the power value: ");
   scanf("%d", &exp);

   int (*ptr)(int,int) = power;
   result = ptr(base,exp);

   printf("%d to the power %d is %d\n",base,exp,result);

   return 0;
}
