#include <stdio.h>

int main(){
	printf("nhap so nguyen tu 1 - 9 ");
	int j; scanf("%d" , &j);
	printf("Bang cuu chuong cua %d la : " ,j); 
	for(int i = 1 ; i <= j ; i++){
		printf("%d x %d = %d \t", i , j , i*j);
	}
}
