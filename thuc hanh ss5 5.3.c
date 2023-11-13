#include<stdio.h>
int main(){
	int phithang = 25000;
	int phicuoc1,phicuoc2,phicuoc3,phicuoc4; 
	int phut;
	printf("nhap so phut: ");
	scanf("%d",&phut);
	if (phut<=50){
		phicuoc1 = phut*600;
		printf("%d",phicuoc1);	
	}
	if (phut>50 && phut>200){
			phicuoc2 = phut*400;
			printf("%d",phicuoc2);	
			if (phut < 400){
				phicuoc3 = phut*200;
				printf("%d",phicuoc3);	
				if (phut>400){
				phicuoc4= phut*100;
					printf("%d",phicuoc4);	
				}
			}
		}
}
