#include <stdio.h>

int main (){
	double a,b;
	
	printf("Nhap vao so a:");
	scanf("%lf", &a);
	
	printf("Nhap vao so b:");
	scanf("%lf", &b);
	
	char operation;
	printf("Nhap vao mot toan tu (+, -, *, /): ");
	scanf(" %c", &operation);
	
	int Hop_le = 1;
	
	double Ket_qua;
	switch (operation){
		case '+':
			Ket_qua = a+b;
			break;
		case '-':
			Ket_qua = a-b;
			break;
		case '*':
			Ket_qua = a*b;
			break;
		case '/':
			if(b==0){
				printf("Loi: khong hop le ");
			}else{
				Ket_qua = a/b;
			}
		
			break;
	default:
		printf("Loi: khong hop le");
		Hop_le = 0;
	}
	if (Hop_le) {
        printf("Ket qua cua phep tinh %.2lf %c %.2lf = %.2lf\n", a, operation, b, Ket_qua);
    }
	
	return 0;
}
