#include<stdio.h>

int main() {
    int thang;
    printf("Hay nhap vao so thang: ");
    scanf("%d", &thang);

    // Ki?m tra t�nh h?p l? c?a th�ng
    if(thang > 12 || thang < 1) {
        printf("So thang khong hop le.\n");
        return 1;
    }

    // Ki?m tra s? ng�y trong th�ng
    switch (thang) {
        case 1:
            printf("Thang 1 c� 31 ng�y.\n");
            break;
        case 2:
            printf("Thang 2 c� 28 ng�y.\n");
            break;
        case 3:
            printf("Thang 3 c� 31 ng�y.\n");
            break;
        case 4:
            printf("Thang 4 c� 30 ng�y.\n");
            break;
        case 5:
            printf("Thang 5 c� 31 ng�y.\n");
            break;
        case 6:
            printf("Thang 6 c� 30 ng�y.\n");
            break;
        case 7:
            printf("Thang 7 c� 31 ng�y.\n");
            break;
        case 8:
            printf("Thang 8 c� 31 ng�y.\n");
            break;
        case 9:
            printf("Thang 9 c� 30 ng�y.\n");
            break;
        case 10:
            printf("Thang 10 c� 31 ng�y.\n");
            break;
        case 11:
            printf("Thang 11 c� 30 ng�y.\n");
            break;
        case 12:
            printf("Thang 12 c� 31 ng�y.\n");
            break;
    }

    return 0;
}
