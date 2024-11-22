#include<stdio.h>
int main(){
	int year; 
	printf("Nhap so nam can kiem tra:  ");
	scanf("%d", &year);
	if ((year %4 == 0 && year %100 != 0)  || ( year % 400 == 0)){
		printf("Nam %d la nam nhuan");
	} else {
		printf("Nam %d khong phai la nam nhuan");
	}
	return 0;
}
