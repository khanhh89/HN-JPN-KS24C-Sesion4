#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("Hay nhap vao ba so nguyen bat ki: ");
	scanf("%d", &num1, &num2, &num3);
	
	 if ((num1 < num3 && num3 < num2) || (num2 < num3 && num3 < num1))
{
		printf("So thu ba nam trong khoang giua so thu nhat va so thu hai");
	}
	else {
		printf("So thu ba khong nam trong khoang so  thu nhat va so thu hai");
		
	}
	return 0;
	
}
