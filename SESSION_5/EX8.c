#include <stdio.h>

int main (){
	float Khoi_nuoc;
	printf("So khoi nuoc nguoi do tieu thu trong mot thang la:");
	scanf("%f",&Khoi_nuoc);
	
	int Hop_le = 1;
	if(Khoi_nuoc < 0 ){
		Hop_le = 0;
	}
	float Gia_tien;
	if(Khoi_nuoc <= 10){
		Gia_tien = Khoi_nuoc * 6000;
	}else if(Khoi_nuoc > 10 && Khoi_nuoc <= 20){
		Gia_tien = 10 * 6000 + (Khoi_nuoc - 10) * 7000;
	}else if(Khoi_nuoc > 20 && Khoi_nuoc <= 30){
		Gia_tien = 10 * 6000 + 10 * 7000 + (Khoi_nuoc - 20) * 8500;
	}else if(Khoi_nuoc > 30){
		Gia_tien = 10 * 6000 + 10 * 7000 + 10 * 8000 + (Khoi_nuoc - 30) * 10000;
	}
	if(Hop_le){
		printf("So tien nguoi do dung de tra phi nuoc la: %.f VND",Gia_tien);
	}else{
		printf("Loi: Thong tin khong hop le vui long nhap lai!");
	}
	return 0;
}
