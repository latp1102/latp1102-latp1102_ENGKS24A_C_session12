#include <stdio.h>

int kiemTraSoHoanHao(int x){
    int sum = 0; 
    for (int i = 1; i <= x / 2 ; i++){
        if (x % i == 0){
            sum += i;
        }
    }
    return (sum == x);
}

int main(){
    int n1, n2;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &n1);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &n2);

    if (kiemTraSoHoanHao(n1)){
        printf("%d la so hoan hao\n", n1);
    } else {
        printf("%d khong phai la so hoan hao\n", n1);
    }

    if (kiemTraSoHoanHao(n2)){
        printf("%d la so hoan hao\n", n2);
    } else {
        printf("%d khong phai la so hoan hao\n", n2);
    }

    return 0;
}

