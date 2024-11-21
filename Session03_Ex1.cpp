#include <stdio.h>

int main(){
    char ten[50];
    printf("Nhap vao ten cua ban : ");
    //scanf("%s", ten);
    gets(ten); 
    printf("Xin chao %s\n", ten);
    return 0;
}
