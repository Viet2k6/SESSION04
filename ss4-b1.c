#include<stdio.h>

int main(){
   int number;
   printf("Moi nhap so nguyen: ");
   scanf("%d", &number); 

   if (number > 0) {
       printf("Day l� so duong");
   } else if (number < 0) {
       printf("Day l� so am");
   } else {
       printf("Day la so 0");
   }

   return 0;
}
