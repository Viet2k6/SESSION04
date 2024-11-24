#include<stdio.h>

int main(){
	int a,b,c;
	printf("Moi nhap 3 canh cua tam giac:");
     scanf("%d %d %d", &a, &b, &c);

    if (a+b>c && a+c>b && b+c>a){
	printf("La 3 canh tam giac");
    }else{printf("Khong phai 3 canh tam giac");
}

   return 0;
}
