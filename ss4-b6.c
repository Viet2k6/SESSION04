#include<stdio.h>
int main(){
	float chi_so_moi , chi_so_cu , so_dien , tien_dien; 
	printf ("Moi nhap vao chi so dien cu: ");
	scanf("%f",&chi_so_cu);
		printf ("Moi nhap vao chi so dien moi: ");
	scanf("%f",&chi_so_moi);
	so_dien = chi_so_moi - chi_so_cu ;
	 if (chi_so_cu>chi_so_moi){
 	printf("chi so moi phai lon hon chi so cu");
 }else if (0<=so_dien && so_dien<50){
 	tien_dien=so_dien*10.000;
 	printf("Tien dien trong thang la: %.3f VND",tien_dien);
 }else if (50<=so_dien && so_dien<100){
 	tien_dien=so_dien*15.000;
 	printf("Tien dien trong thang la: %.3f VND",tien_dien);
 }else if (100<=so_dien && so_dien<150){
 	tien_dien=so_dien*20.000;
 	printf("Tien dien trong thang la: %.3f VND",tien_dien);
 }else if (150<=so_dien && so_dien<200){
 	tien_dien=so_dien*25.000;
 	printf("Tien dien trong thang la: %.3f VND",tien_dien);
 }else{
 	tien_dien=so_dien*30.000;
 	printf("Tien dien trong thang la: %.3f VND",tien_dien);
 
 }

    return 0;
} 
