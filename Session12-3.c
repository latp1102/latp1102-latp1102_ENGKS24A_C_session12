#include <stdio.h>

int giai_thua(int x) {
    int a = 1;
    for (int i = 1; i <= x; i++) {
        a *= i;
    }
    return a;
}
int main() {
    int n;

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("So giai thua phai la so nguyen duong\n");
    } else {
        printf("Giai thua cua %d la: %d\n", n, giai_thua (n));
    }

    return 0;
}

