#include <stdio.h>

int main(){
	float toan, van, anh, TongDiem, Trungbinhcong; 
	
	printf("Nhap diem toan: ");
	scanf("%f", &toan);
	
	printf("Nhap diem van: ");
	scanf("%f", &van);
	
	printf("Nhap diem anh: ");
	scanf("%f", &anh);
	
	TongDiem = toan + van + anh ;
	Trungbinhcong = TongDiem / 3;
	
	printf("Tong diem : %.2f\n", TongDiem);
	printf("Trung binh cong : %.2f\n", Trungbinhcong );
	
	return 0; 
} 
