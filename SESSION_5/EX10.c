#include <stdio.h>

int main(){
	float So_dien;
	printf("Nhap vao so dien ho do da su dung:");
	scanf("%f",&So_dien);
	
	int Loai_tieu_dung;
	printf("Nhap vao loai tieu dung (1.Ho gia dinh, 2.Ho kinh doanh, 3.Ho san xuat):");
	scanf(" %d",&Loai_tieu_dung);
	
	int Hop_le = 1;
	if(So_dien < 0){
		Hop_le = 0;
	}
	
	float Tien_dien;
	if(So_dien <= 50){
		Tien_dien = So_dien * 1500;
	}else if(So_dien > 50 && So_dien <= 100){
		Tien_dien = (50*1500 + (So_dien - 50) * 2000);
	}else if(So_dien > 100 && So_dien <= 200){
		Tien_dien = (50*1500 + 50*2000 + (So_dien-100) * 2500);
	}else if(So_dien > 200){
		Tien_dien = (50*1500 + 50*2000 + 100*2500 +(So_dien - 200)* 3000);
	}
	float So_tien_phai_tra;
	switch(Loai_tieu_dung){
		case 1:
			So_tien_phai_tra = Tien_dien * (1 + 5.0/100);
			break;
		case 2:
			So_tien_phai_tra = Tien_dien * (1 + 10.0/100);
			break;
		case 3:
			So_tien_phai_tra = Tien_dien * (1 + 8.0/100);
			break;
		default:
			printf("Loi: Thong tin nhap khong hop le!");
			Hop_le = 0;
	}
	if(Hop_le){
		printf("So tien phai tra la: %.0f VND",So_tien_phai_tra);
	}else{
		printf("Loi: Thong tin nhap khong hop le!");
	}
	return 0;
}
