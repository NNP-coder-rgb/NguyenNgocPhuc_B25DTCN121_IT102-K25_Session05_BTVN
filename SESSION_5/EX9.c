#include <stdio.h>

int main (){
	int so_ngay_cong;
	printf("So ngay cong lam viec trong thang la: ");
	scanf("%d",&so_ngay_cong);
	
	float He_so_luong;
	printf("He so luong cua nguoi do la: ");
	scanf("%f",&He_so_luong);
	
	int Hop_le = 1    ;
	if(so_ngay_cong < 0){
		Hop_le = 0;
	}
	if(He_so_luong < 0){
		Hop_le = 0;
	}
	if(so_ngay_cong > 31){
		Hop_le = 0;
		
	}
	float luong_nhan_vien,
		  luong_to_truong,
		  luong_quan_ly;
	
	
	if(so_ngay_cong > 26){
		luong_nhan_vien = so_ngay_cong * 160000 * He_so_luong + 500000 + (so_ngay_cong - 26) * 200000;
		luong_to_truong = so_ngay_cong * 160000 * He_so_luong + 1000000 + (so_ngay_cong - 26) * 200000;
		luong_quan_ly = so_ngay_cong * 160000 * He_so_luong + 2000000 + (so_ngay_cong - 26) * 200000;
	}else{
		luong_nhan_vien = so_ngay_cong * 160000 * He_so_luong + 500000;
		luong_to_truong = so_ngay_cong * 160000 * He_so_luong + 1000000;
		luong_quan_ly = so_ngay_cong * 160000 * He_so_luong + 2000000;
	}
	if(Hop_le){
		printf("Luong nhan vien nhan duoc trong thang nay la: %.f VND\n",luong_nhan_vien);
		printf("Luong to truong nhan duoc trong thang nay la: %.f VND\n",luong_to_truong);
		printf("Luong quan ly nhan duoc trong thang nay la: %.f VND\n",luong_quan_ly);
	}else{
		printf("Loi: Thong tin khong hop le, vui long nhap lai!");
}
	return 0;
}
