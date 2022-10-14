 #include<stdio.h>

int main()
 {
 // printf("a mainigaa vertiba uzreiz (kaa simbols uzreiz peec deklareshanas: %c\n",a);
 // nedriikst izmantot pirms deklareshanas

 char a; // mainigaa ar indentifikatora (vai vaardu) "a" deklereeshana
         // ar identifikatoru a vienoziimigi tiek sasaistiits kaads
         // atminjas apgabals - kur? (vai vieta)? un cik (vai izmeers)?
         // uzjautaajumu detalizxeti kur? adrese atbildesim citaa nod>
         // cik? - 1byte, jo ... cha
         //komentaars par vaardu vai indentikifators driikst saturet
         //burtus ir ir starpiiba starp lieliem uz maziem burtiem -a nav A casesntive
         //cipari
         //var but mnenosisks
 printf("a mainigaa vertiba uzreiz (kaa simbols uzreiz peec deklareshanas: %c\n",a);
 printf("a mainigaa vertiba uzreiz (kaa dec uzreiz peec deklareshanas: %d\%c",a10);
 printf("a mainigaa vertiba uzreiz (kaa hex uzreiz) peec deklareshanas: %#x\n",a);
 printf("a mainigaa vertiba uzreiz (kaa oct uzreiz) peec deklareshanas: %#o\n",a);
 // ; ; ; ; ; ; ; // daudzi tukshie operatori

 //int a;
 // nedriikst shadi pardeklareet mainiigo

 //NB! mainiiga butiiba
 a = 89; // "=" - pieskjirshanas operaacija
         // pa kreisi ir 89 - atbilstoshi noformeejam pierakstam taa ir
         // int tipa (4 bytes) konstante ==> 89 = 64 (2x6) + 16(2x4) + 8 (2x3) + 1(2x0) 
         // 0000 0000  0000 0000  0000 0000  0101 1001
        //a = 89 -> mainiigaa a1 baitaa tiek ierakstiits 0101 1001
 printf("a mainigaa vertiba uzreiz (kaa simbols uzreiz peec deklareshanas: %c\n",a);
 printf("a mainigaa vertiba uzreiz (kaa dec uzreiz peec deklareshanas: %d\%n",a);
 printf("a mainigaa vertiba uzreiz (kaa hex uzreiz) peec deklareshanas: %#x\n",a);
 printf("a mainigaa vertiba uzreiz (kaa oct uzreiz) peec deklareshanas: %#o\n",a);

 a= 0x4c
 printf("a mainigaa vertiba uzreiz (kaa simbols uzreiz peec deklareshanas: %c\n",a);
 printf("a mainigaa vertiba uzreiz (kaa dec uzreiz peec deklareshanas: %d\%c",a10);
 printf("a mainigaa vertiba uzreiz (kaa hex uzreiz) peec deklareshanas: %#x\n",a);
 printf("a mainigaa vertiba uzreiz (kaa oct uzreiz) peec deklareshanas: %#o\n",a);

 a= 160
 // char -> signed char => -128 ... 0 ... 127
 // 160 dec -> 128
 //muusu (ieksh a) riciibaa ir (1)010 000
 //
 //
 //
 return 0;
 }
