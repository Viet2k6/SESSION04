#include<stdio.h>

int main(){
	int month;
	printf("Moi nhap thang (1-12): ");
	scanf("%d", &month);
	
	if (month<1 || month>12){
		printf("Thang khong hop le");
	}else if (month==2){
		printf("Thang nay co 28 ngay");
	}else if (month==4 || month==6 || month==9 ||month==11){
		printf("Thang nay co 30 ngay");
	}else{
		printf("Thang nay co 31 ngay");
	}
	
	return 0;
}
