#include <stdio.h>

int main (){
	int age;
	printf("Nhap vao tuoi cua khach:");
	scanf("%d",&age);
	
	int Tien_ve;
	printf("Nhap gia tien cua mot ve:");
	scanf("%d",&Tien_ve);
	
	int Hop_le = 1;
	if(age < 0){
		Hop_le = 0;
	}
	float Gia_ve;
	if(age < 6){
		Gia_ve = 0;
	}else if(age >= 6 && age <= 18){
		Gia_ve = Tien_ve * 50.0/100;
	}else if(age > 18 && age <= 60){
		Gia_ve = Tien_ve;
	}else if(age > 60){
		Gia_ve = Tien_ve * 70.0/100;
	}
	if(Hop_le){
		printf("Gia tien hanh khach do phai tra la: %.f VND",Gia_ve);
	}else{
		printf("Thong tin khong hop le");
	}
	return 0;
}
