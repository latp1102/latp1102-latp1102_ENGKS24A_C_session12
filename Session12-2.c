#include <stdio.h>

void inMang(int arr[], int x){
    for (int i = 0; i < x; i++) {
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang vua nhap la: ");
    inMang(arr, n);

    return 0;
}

