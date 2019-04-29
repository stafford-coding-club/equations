#include <stdio.h>
#include <stdlib.h>

int main(void) {

   while (1) {
   
      float num1 = 0, num2 = 0;

      printf("Enter first number:");
      scanf("%f", &num1);
      printf("Enter second number:");
      scanf("%f", &num2);

      int opt = -1;
      while (opt < 0 || opt > 5) {
         printf("Enter an operation (1[+] 2[-] 3[*] 4[/] 5[EXIT]): ");
         scanf("%d", &opt);
      }

      float answer;

      if (opt == 1)
         answer = num1 + num2;
      else if (opt == 2)
         answer = num1 - num2;
      else if (opt == 3)
         answer = num1 * num2;
      else if (opt == 4)
         answer = num1 / num2;
      else if (opt == 5)
         break;

      printf("Result: %.4f\n", answer);

   }

   printf("Goodbye!\n");

   return 0;
}