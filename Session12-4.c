#include <stdio.h>

int tim_Max(int arr[], int n){
    int max = arr[0]; 
    for (int i = 1; i < n; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {2, 5, 6, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]); 

    int lon_nhat = tim_Max(arr, n);
    printf("So lon nhat trong mang: %d\n", lon_nhat);

    return 0;
}

