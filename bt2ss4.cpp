#include<stdio.h>
int main(){
	int age;
	printf("moi ban nhap vao 1 so nguyen  ");
	scanf("%d", &age);
	
	if (age %  2 == 0){
	printf("la so chan", age);
	} else {
		printf("la so le", age);
		
	}
	return 0;
}
	
