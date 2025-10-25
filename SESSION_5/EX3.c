#include <stdio.h>

int main (){
	float GPA ;
	printf("Nhap diem trung binh cua ban:");
	scanf("%f",&GPA);
	const char *Hoc_luc;
	int hop_le = 1;
	if(GPA < 0 && GPA >10){
		hop_le = 0;
	}
	if(GPA < 5){
		Hoc_luc = "Yeu";
	}else if(GPA >= 5 && GPA < 6.5){
		Hoc_luc = "Trung binh";
	}else if(GPA >= 6.5 && GPA < 8){
		Hoc_luc = "Kha";
	}else{
		Hoc_luc = "Gioi";
	}
	if(hop_le){
		printf("Hoc luc: %s",Hoc_luc);
	}else("Loi thong tin vui long nhap lai");
	return 0;
}
