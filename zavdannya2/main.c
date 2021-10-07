#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>// pidkluchennya bibliotek
int main () { //pochatok
    int k = 0;
    int a,b; // vedennya zminuh
    while(1){ //ccukl dlia perevirku chu pravulno vu velu znachennya 
    printf("\nVvedit chislo nujnu meju a = ");//vuvedennya
    scanf("%d",&a);// vvod 
    printf("\nVvedit chislo verhniou meju b = ");
    scanf("%d",&b);
    if(a > b){printf("\n vu shoss ne pravelno vvelu poduvittsia uvajnishe scho vu ne tak zrobulu\n");continue;} //pru nepravulnomu vvodi cia funkzia vertae vas nazad
    else 
    { break;}//zackruvae cukl
    }
   const int n = 2 , m = 2; // vkazue rozmir kvadratuchnoi funkcii i zacripliau constantou
srand(time(0)); //dlya randomizatora
int c[n][m]; // stvoruu masiv
const int  Low = -100, High = 100; // meju mogo randomizatora
for (int i = 0; i < n; i++){ //cukl dlya pidstavlyannya cufr randomizatorom u masiv
for (int j = 0; j < m; j++)
c[i][j]=Low+rand()%High;} // sama pidstanovka randomnuh cifr
 puts("\n kvadratuchna matruca: \n");
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++)
printf("c[%d][%d]=%d\t", i, j, c[i][j]); printf("\n");} // vuvid masuva na ekran
puts("\n chusla iaki ne potrapliaut  u vashu  zadanu meju: \n");
for (int i = 0; i < n; i++) {                                // cukl dlia vuznachennya masuviv iaki vuyshlu za meji vkazanoi vamu vidrizku a and b
for (int j = 0; j < m; j++){ if(a > c[i][j] || b < c[i][j]){ 
printf("c[%d][%d]=%d\t", i, j, c[i][j]); printf("\n"); k = 1;}}}
 if(k == 0) {                                                          // if na vupadok iakscho vsi z perechuslenuh masuviv popadut u vashu meju
     printf("\nVsi kordunatu popadayut u zadanu meju a and b !!!\n\n");
 }
return 0;}// kinec