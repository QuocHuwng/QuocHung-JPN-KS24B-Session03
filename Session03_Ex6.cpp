#include <stdio.h>

int main(){
	float a, h, S; 
	
	printf("Nhap do dai canh: "); 
	scanf("%f", &a);
	
	printf("Nhap chieu cao:");
	scanf("%f", &h);
	
	S = ( a * h ) / 2;
	printf(" Dien tich tam giac : %.2f\n", S);
	
	 return 0; 
} 
