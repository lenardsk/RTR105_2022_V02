// nosaciijuma operators if tiek izmantots koda izpildes sazaroshanai
// if (izteiksme) darbiba_1_gab;
// if (izteiksme)
//  darbiiba 1 gab;
// noziime sekojosh - darbiiba 1 gab tiks izpildiita tad kad
//                    izteiksmes izpildes rezultaats ir "true"
//                    par true noziimi skat ieprieks. nodarbiib.
// if(izteiksme) {1_darbiiba; 2_darbiiba...}
// if (izteiksme) 
// if (izteiksme)
//  {
//  1_darbiiba;
//  2_darbiiba;
//  ....;
//  }
//  ar {} apzimee (jeb nodala) darbiibu bloku

// if (izteiksme) darbiiba_1_gab; else darb_1_gab;
// if(izteiksme)
//   darbiiba_1gab;

// if(izteiksme) {1_darbiiba; 2_darbiiba; ....;} else [1_s darbiiba: ...;}
// if (iz	)
//    {
//    1_darb;
//    2_darb;
//    ...;
// }
// else
//   {
//   1_s_darbiiba;
//   ....;
//   }
// else vnmeer" pieder " kadam if un atordaas vienas darbiibas vai darb 
//             bloka attalumaa no if
//    un tam nav sava parbaudamaa izteiksme

// ja kautko vajag no "elif"veidiigu
// if(izteiksme_1)
//   {
//   ;// ; -tuksh operators - neko nedara, bet laiku nedaudz pateree
// else
//   {
//  if (izteiksme_2)
//       {
//     ;
//     }
//   }

#include<stdio.h>

int main()
 {
 int a,b;
   printf("tavs ievadiitais a(%d)ir lielaaks par ievadiito b(%d)\",a,b);

 scanf("%d;" ,&a);
 scanf("%d " ,&b);
 
if(a>b)
 {
 //else ;
  printf("tavs ievadiitais a(%d)ir lielaaks par ievadiito b(%d)\",a,b);
 }
 else
 {
  printf("tavs ievadiitais a(%d)ir lielaaks par ievadiito b(%d)\",a,b);
 if(a==b)
  printf("Vēl vairāk, a(%d) ir mazaaks par b(%d)\n",a,b);
 else
  printf("Vēl vairāk, a(%d) ir mazaaks par b(%d)\n",a,b);
 }

 return 0;
 }
