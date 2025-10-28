#include <stdio.h>

int main (){
	int so_ngay_cong;
	printf("So ngay cong lam viec trong thang la: ");
	scanf("%d",&so_ngay_cong);
	
	float He_so_luong;
	printf("He so luong cua nguoi do la: ");
	scanf("%f",&He_so_luong);

	int chucVu;
	printf(" 1.Nhan vien\n 2.To truong\n 3.Quan ly\nNhap vao chuc vu :");
	scanf("%d",&chucVu);
	
	int Hop_le = 1    ;
	if(so_ngay_cong < 0 || so_ngay_cong > 31 || He_so_luong < 0 || chucVu < 1 || chucVu > 3){
		Hop_le = 0;
		
	}
	int phu_cap;
	switch(chucVu){
		case 1:
		phu_cap = 500000;
		break;
		case 2:
		phu_cap = 1000000;
		break;
		case 3:
		phu_cap = 2000000;
		break;
	}
	float luong;
	
	
	if(so_ngay_cong > 26){
		luong = so_ngay_cong * 160000 * He_so_luong + phu_cap + (so_ngay_cong - 26) * 200000;
	
	}else{
		luong = so_ngay_cong * 160000 * He_so_luong + phu_cap;
		
	}
	if(Hop_le){
		printf("Luong nhan vien nhan duoc trong thang nay la: %.f VND\n",luong);
		
	}else{
		printf("Loi: Thong tin khong hop le, vui long nhap lai!");
}
	return 0;
}

