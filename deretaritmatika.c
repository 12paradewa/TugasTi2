#include<stdio.h>
int n (int n,float rasio,float awal){
int i, total;

  printf("Nilai Un= ");
	for(i=0;i<n;i++){
	 	awal=awal * rasio;
	 	total= total+awal;

printf(" %f  ", awal);
	 }
return total;
}

int main(){

	int n,i;
	 float rasio, total, awal;

	 printf("Masukan nilai a: ");
	 scanf("%f", &awal);
	 total=awal;
	 printf("Masukan nilai rasio (dalam desimal): ");
	 scanf("%f", &rasio);
	 printf("Masukan nilai n :");
	 scanf("%d", &n);

     total = (n, rasio, awal);

	 printf("Nilai total deret : %f",total);

	 return 0;
}
