#include<stdio.h>

int main() {
    int electricityNumber, bill;
printf("Nhap so dien da su dung trong thang: ");
scanf("%d", &electricityNumber);

    if (electricityNumber >= 0 && electricityNumber < 50) {
        bill = electricityNumber * 10000;
        printf("So tien cua ban phai tra la; %d dong\n", bill);
    } 
    else if (electricityNumber >= 50 && electricityNumber < 100) {
        bill = electricityNumber * 15000;
        printf("So tien cua ban phai tra la; %d dong\n", bill);
    } 
    else if (electricityNumber >= 100 && electricityNumber < 150) {
        bill = electricityNumber * 20000;
        printf("So tien cua ban phai tra la; %d dong\n", bill);
    } 
    else if (electricityNumber >= 150 && electricityNumber < 200) {
        bill = electricityNumber * 25000;
        printf("So tien cua ban phai tra la; %d dong\n", bill);
    } 
    else if (electricityNumber >= 200) {
        bill = electricityNumber * 30000;
        printf("So tien cua ban phai tra la; %d dong\n", bill);
    } 
    else {
        
        printf("So dien khong hop le. \n");
    }

    return 0;
}
