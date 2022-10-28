//Ciklu konstrukcija lauj peec kartas 
//vienas un taas pashas koda rindas (alternatiiva- programeetaajs manuaali atkaarto rindu rakstiishanu)*/

// while - akmeer
// do- dariit while kammer
// for dariit liidz
// kodeeshanai vai izmantoot riiku https://www.onlinegdb.com/online_c_compiler

// while(izteiksme) viena darbiiba;
       //taapat kaa bija ar if (izteiksmi) viena darbiiba;
// while(izteiksme); 
// viena darbiiba;
// while(izteiksme)(pirmaa darbiiba. otraa darbiiba;)
// while (izteiksme)
// {
// pirmaa darbiiba;
// otraa darbiiba; 
// }

// taapat kaa ieprieksh viena_darbiiba vai pirmaa darbiiba u.t.t
// tiks regulaari izpildiitas ja izteiksmes rezultaats ir "true"
// "true" - 1 rezultaata  kaut viena bitaa
// "false" - 0 visos rezultata bitos

#include<stdio.h>

int main()
 {
 char c = 10;

// while (c>=0)
 {
  printf("c = %d\n" ,c);
  //c = -7;
 c--; // c = c - 1; // c - = 1; // c + = -1 ; // --c;
  }

  printf("Izdruka ar printf aiz cikla:\n");
  printf("c = %d\n",c);

 return 0;
 }
