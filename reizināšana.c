#include <stdio.h>
int main () {
   double a, b, product;
   printf("Cienījāmais lietotāj, lūdzu ievadiet divus skaitļus:  ");
   scanf("%lf %lf" , &a, &b);

   // Reizināšanas operācija
   product = a * b;

   //%.2lf (long double) formāta norāditājs, kurā 2 izmanto,
   // lai kontrolētu decimālzīmju platumu.
   printf("Rezultāts = %.2lf", product);

  return 0;
}

