#include <stdio.h>

int main (){
	int a,b;
	printf("Nhap vao so a:");
	scanf("%d",&a);
	
	printf("Nhap vao so b:");
	scanf("%d",&b);
	
	if(a > b){
		printf("So lon hon la: %d",a);
	}if(a == b){
		printf("Hai so bang nhau");
	}else{
		printf("So lon hon la: %d",b);
	}
	return 0;
} 
