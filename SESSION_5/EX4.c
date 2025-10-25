#include <stdio.h>

int main(){
	float income;
	printf("So tien thu nhap trong mot thang la:");
	scanf("%f",&income);
	float Thue_giai_phong = 0;
	int Hop_le = 1;
	if(income < 0){
		Hop_le = 0;
	}
	if(income <=5){
		Thue_giai_phong = income * 5.0/100;
	}else if(income >5 && income<=10){
		Thue_giai_phong = income * 10.0/100;
	}else if(income > 10){
		Thue_giai_phong = income * 15.0/100;
	}
	if(Hop_le){
		printf("Thue giai phong la: %.2f trieu",Thue_giai_phong);
	}else{
		printf("Loi: Sai thong tin vui long nhap lai!");
	}
	return 0;
}
