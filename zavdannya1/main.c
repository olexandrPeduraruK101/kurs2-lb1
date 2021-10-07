#include<stdio.h>
#include<math.h>//pidkl bibliotek
int main () { // pochatok
    int n; int m; int k = 0;//zmina
printf("Zadayte scilki bude ryadkiv u masuvi, n = "); //vuvid
scanf("%d",&n);//vvod
printf("\nZadayte scilki bude stovpziv u masuvi, m = ");
scanf("%d",&m);
printf("\nn = %d, m = %d\n",n,m);

int a[n][m]; // stvorenia masuva 

for (int i = 0; i < n; i++) //cukl dlya  vvedennya masuva z klaviaturu
for (int j = 0; j < m; j++) {
printf("a[%d][%d]=", i, j);
scanf("%d", &a[i][j]); }

puts("\n");
puts("Vash vvedenuy masiv: ");
for (int i = 0; i < n; i++) { // cukl dlya pokazu masuvu u vudi matruci
for (int j = 0; j < m; j++)
printf("a[%d][%d]=%d\t", i, j, a[i][j]); printf("\n");}

puts("\n");
puts("Nomera riadkiv: ");
for (int i = 0; i < n; i++) { 
for (int j = 0; j < m; j++)
if (a[i][j] == 0) { 
printf("[%d]",i); j = j + m; k = k + 1; printf("\n");}} // nomer ryadka

puts("\n");
puts("riadku: ");
for (int i = 0; i < n; i++) { 
for (int j = 0; j < m; j++)
if (a[i][j] == 0) { 
for (int j = 0; j < m; j++){ 
printf("[%d]  \t", a[i][j]); } j = j + m;}} // perecheslenia cufr v cuh ryadkah
printf("\n \n");

if (k == 0){printf("nichogo nema pid zapusamu, ce ne strashno mabut u tvoemu masuvi ne bulo null 0 ;)\n\n");}
    return 0;// end
}
 
