#include<stdio.h>
int main(){
	int doanhthu;
	printf("nhap doanh thu: ");
	scanf("%d", &doanhthu);
	int hoahong;
	if(doanhthu<=100000000){
		hoahong = doanhthu*5/100;
		printf("so tien hoa hong la: %d", hoahong);
	}else if(doanhthu > 100000000 && doanhthu<=300000000){
		hoahong = doanhthu*10/100;
		printf("so tien hoa hong la: %d", hoahong);
	}else if (doanhthu > 300000000 ){
		hoahong = doanhthu*30/100;
		printf("so tien hoa hong la: %d", hoahong);
	}
}
