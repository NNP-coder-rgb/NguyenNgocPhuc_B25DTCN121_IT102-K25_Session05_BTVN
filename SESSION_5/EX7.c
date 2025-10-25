#include <stdio.h>

int main (){
	char Ki_tu;
	printf("Nhap ki tu vao day:");
	scanf("%c",&Ki_tu);
	
	if(Ki_tu>= 65 && Ki_tu <= 90){
		char lowercase = Ki_tu + 32;
		printf("Chuyen tu chu hoa ra chu thuong: %c",lowercase); 
	}else if(Ki_tu >= 97 && Ki_tu <= 122){
		char suppercase = Ki_tu - 32;
		printf("Chuyen tu chu thuong ra chu hoa: %c",suppercase);
	}else{
		printf("Loi: Ki tu ban nhap kh hop le!");
	}
	return 0;
}
