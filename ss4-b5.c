#include<stdio.h>

int main(){
	int firstNumber, secondNumber, thirdNumber;
	printf("Moi nhap so nguyen thu nhat: ");
	scanf("%d", &firstNumber);
	
    	printf("Moi nhap so nguyen thu hai: ");
	scanf("%d", &secondNumber);
	
		printf("Moi nhap so nguyen thu ba: ");
	scanf("%d", &thirdNumber);
	
	if (thirdNumber>firstNumber && thirdNumber<secondNumber || thirdNumber<firstNumber && thirdNumber>secondNumber ){
		printf("So thu ba nam trong khoang giua so thu hai va thu nhat");
	}else{printf("So thu ba khong nam trong khoang giua so thu hai va thu nhat");
	}
	
	return 0;
}
