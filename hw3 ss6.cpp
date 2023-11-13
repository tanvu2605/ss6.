#include <stdio.h>
#include <stdlib.h>

int main(){
	int a , b , c;
	printf("nhap vao 3 so nguyen a b c \n");
	scanf("%d %d %d",&a,&b,&c);

	do{
		printf("********CACULATOR******** \n");
		printf("1. tong 3 so \n");
		printf("2. trung binh cong cua 3 so \n");
		printf("3. so lon nhat , so nho nhat \n");
		printf("4. thoat \n");

		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("%d + %d + %d = %d \n",a,b,c,a+b+c);
				break;
			case 2:
				printf("trung binh cong la : %d \n",(a+b+c)/3);
				break;
			case 3:
				int max , min;
				if(a > b && a > c && b > c){
					max = a;
					min = c;
				}else if(a > b && a > c && c > b){
					max = a;
					min = b;
				}else if(b > a && b > c && a > c){
					max = b;
					min = c;
				}else if(b > a && b > c && c > a){
					max = b;
					min = a;
				}else if(c > a && c > b && a > b){
					max = c;
					min = b;
				}else{
					max = c;
					min = a;
				}
				printf("max la: %d \n",max);
				printf("min la: %d \n",min);
				break;
			case 4:
				exit(0);
			default:
				printf("vui long chon lai tu 1 - 4 \n");
		}
	}while(1==1);
}
