#include<stdio.h>
int n (int n,float rasio,float awal){
int i, total;

  printf("Nilai Un= ");
	for(i=0;i<n;i++){
	 	awal=awal * rasio; //a = awal b= rasio 
	 	total= total+awal; //n  // n=a+(n-1)*b;

printf(" %1.2f  ", awal);
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
	 scanf("%f", &n);

     total = (n, rasio, awal);

	 printf("Nilai total deret : %2.f", total);

	 return 0;
}
