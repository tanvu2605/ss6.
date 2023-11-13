#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("nhap vao 2 so a b ");
	scanf("%d %d", &a , &b);
	do{		
		printf("*****CACULATOR***** \n");
		printf("1. tong 2 so \n");
		printf("2. hieu 2 so \n");
		printf("3. tich 2 so \n");
		printf("4. thuong 2 so \n");
		printf("5. so du phep chia 2 so \n");
		printf("6. uoc chung lon nhat \n");
		printf("7. boi chung nho nhat \n");
		printf("8. thoat \n");

		int choice ; scanf("%d",&choice);
		switch (choice){
			case 1:
				printf("%d + %d = %d \n",a,b,a+b);
				break;
			case 2:
				printf("%d - %d = %d \n",a,b,a-b);
				break;
			case 3:
				printf("%d x %d = %d \n",a,b,a*b);
				break;
			case 4:
				printf("%d / %d = %d \n",a,b,a/b);
				break;
			case 5:
				printf("%d %% %d = %d \n",a,b,a%b);
				break;	
			case 6:
				int UCLN;
				for(int i = 1 ; i <= a || i <= b ; i++){
					if(a % i == 0 && b % i == 0){
						UCLN = i;
					}
				}
				printf("UCLN la %d \n",UCLN);
				break;
			case 7:
				printf("BCNN la %d \n", (a*b)/UCLN);
				break;
			case 8:
				exit(0);
			default:
				printf("vui long chon lai tu 1 - 8 \n");
		}
	}while(1 == 1);
}
