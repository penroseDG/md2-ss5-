#include<stdio.h>
int main(){
	int month,day;
	printf("nhap ngay: ");
	scanf("%d", &day);
	printf("nhap thang: ");
	scanf("%d", &month);
	if(month == 3){
		if(day >= 1 && day<=20 ){
			printf("cung song ngu ");
		}else if(day>=21 && day<=31){
				printf("cung bach duong ");
		}	
	} else if(month == 4){
		  if(day >= 1 && day<=20){
		  	printf("cung bach duong");
		  } else if (day >= 21 && day <= 30)
				printf("cung kim nguu");
		}
	else if(month == 5){
		  if(day >= 1 && day<=20){
		  	printf("cung kim nguu");
		  } else if (day >= 21 && day <= 31)
				printf("cung song tu");
		}	
	else if(month == 6){
		  if(day >= 1 && day<=21){
		  	printf("cung song tu");
		  } else if (day >= 22 && day <= 30)
				printf("cung cu giai");
		}	
	else if(month == 7){
		  if(day >= 1 && day<=22){
		  	printf("cung cu giai");
		  } else if (day >= 23 && day <= 31)
				printf("cung su tu");
		}	
	else if(month == 8){
		  if(day >= 1 && day<=22){
		  	printf("cung su tu");
		  } else if (day >= 23 && day <= 31)
				printf("cung xu nu");
		}	
	else if(month == 9){
		  if(day >= 1 && day<=22){
		  	printf("cung xu nu");
		  } else if (day >= 23 && day <= 30)
				printf("cung thien binh");
		}	
	else if(month == 10){
		  if(day >= 1 && day<=23){
		  	printf("cung thien binh");
		  } else if (day >= 24 && day <= 31)
				printf("cung bo cap");
		}
	else if(month == 11){
		  if(day >= 1 && day<=22){
		  	printf("cung bo cap");
		  } else if (day >= 23 && day <= 30)
				printf("cung nhan ma");
		}	
	else if(month == 12){
		  if(day >= 1 && day<=21){
		  	printf("cung nhan ma");
		  } else if (day >= 22 && day <= 31)
				printf("cung ma ket");
		}	
	else if(month == 1){
		  if(day >= 1 && day<=19){
		  	printf("cung ma ket");
		  } else if (day >= 20 && day <= 31)
				printf("cung bao binh");
		}
	else if(month == 2){
		  if(day >= 1 && day<=18){
		  	printf("cung bao binh");
		  } else if (day >= 19 && day <= 29)
				printf("cung song ngu");
		}	
}

