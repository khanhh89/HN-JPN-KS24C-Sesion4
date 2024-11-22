#include<stdio.h>

int main() {
    int thang;
    printf("Hay nhap vao so thang: ");
    scanf("%d", &thang);

    // Ki?m tra tính h?p l? c?a tháng
    if(thang > 12 || thang < 1) {
        printf("So thang khong hop le.\n");
        return 1;
    }

    // Ki?m tra s? ngày trong tháng
    switch (thang) {
        case 1:
            printf("Thang 1 có 31 ngày.\n");
            break;
        case 2:
            printf("Thang 2 có 28 ngày.\n");
            break;
        case 3:
            printf("Thang 3 có 31 ngày.\n");
            break;
        case 4:
            printf("Thang 4 có 30 ngày.\n");
            break;
        case 5:
            printf("Thang 5 có 31 ngày.\n");
            break;
        case 6:
            printf("Thang 6 có 30 ngày.\n");
            break;
        case 7:
            printf("Thang 7 có 31 ngày.\n");
            break;
        case 8:
            printf("Thang 8 có 31 ngày.\n");
            break;
        case 9:
            printf("Thang 9 có 30 ngày.\n");
            break;
        case 10:
            printf("Thang 10 có 31 ngày.\n");
            break;
        case 11:
            printf("Thang 11 có 30 ngày.\n");
            break;
        case 12:
            printf("Thang 12 có 31 ngày.\n");
            break;
    }

    return 0;
}
