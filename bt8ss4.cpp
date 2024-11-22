#include<stdio.h>

int main() {
    int a, b, c;
    printf("Nhap ba canh cua tam giac: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a > 0 && b > 0 && c > 0) {
        if (a + b > c && b + c > a && a + c > b) {
            printf("Ba so vua nhap la ba canh cua tam giac.\n");
        } else {
            printf("Ba so vua nhap khong phai la ba canh cua tam giac.\n");
        }
    } else {
        printf("Do dai cua canh tam giac phai lon hon 0.\n");
    }

    return 0;
}
