#include <stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
int main(){
   int a, b, c;
   int hi;
   int lo;

   printf("Cienijamais lietotāj, lūdzu ievadiet pirmo decimālskaitli: ");
   scanf("%d", &a);
   printf(" ...otro decimālskaitli: ");
   scanf("%d", &b);
   printf(" ...trešo decimālskaitli: ");
   scanf("%d", &c);

   lo = min(min(a, b), c);
   hi = max(max(a, b), c);
   printf("Zemākais %d\n", lo);
   printf("Vidējais %d\n", a+b+c-lo-hi);
   printf("Augstākais %d\n", hi);

   getchar();
}
