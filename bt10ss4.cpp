#include<stdio.h>
int main(){
	//B1: Khai bao kieu du lieu cho a,b,c, temp;
	int a,b,c,temp;
	
	//B2: Nhap du lieu cho a,b,c tu nguoi dung
	printf("Nhap so thu nhat: \n");
	scanf("%d", &a);
	printf("Nhap so thu hai: \n");
	scanf("%d", &b);
	printf("Nhap so thu ba: \n");
	scanf("%d", &c);
	//2,1 In ket qua sau khi nguoi dung nhap
	printf("Truoc khi sap xep:%d %d %d", a,b,c);
	
	//B3: Xu li tinh toan
	//3.1: So sánh a>b
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	//3,2: so sanh a>c
	if(a>c){
		temp=a;
		a=c;
		c=temp;
	}
	//3.3: so sánh b>c
	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}
	//B4: in ket qua sau khi sap xep
	printf("Ket qua khi sap xep: %d %d %d", a,b,c);
	//b5: ket thuc chuong trinh
	
	return 0;
}
