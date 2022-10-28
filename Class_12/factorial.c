// 5! = 5 * 4 * 3 * 2 * 1 =  1 *2 *3 *4*5*=4! *5
// 5! 5=4 ! 

// 0! = 1 // nulle ir tuksha kopa [] - cik skaitlju koas var uztasiiit no tukshas skaitlju kopas - vienu - vienu tukshu []

#include <stdio.h>

int main()
 {
 int i, n, fact;
 printf("cienijamais lietotaj, ludzu ievadi vienu naturalskaitli: ");
 scanf ("%d",&n);

for(i=1, fact =1 ; i<=n ; i++ )
 {
 fact = fact * i ; // fact *=i
 printf("%3d! = %12d\n",i,fact);
 }

return 0;
}
