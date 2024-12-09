#include<stdio.h>

int isPrime(int x){
	int count = 0;
	for(int i = 1; i <= x;i++){
		if(x % i == 0){
			count++;
		}
	}
	if(count == 2){
	    return 1;
    }
}

int main(){
	int n1;
	printf("Moi ban nhap vao so thu nhat: ");
	scanf("%d",&n1);
	int n2;
	printf("Moi ban nhap vao so thu hai: ");
	scanf("%d",&n2);

	if (isPrime(n1) == 1){
        printf("%d la so nguyen to\n", n1);
    } else {
        printf("%d khong phai la so nguyen to\n", n1);
    }
    if (isPrime(n2) == 1){
        printf("%d la so nguyen to\n", n2);
    } else {
        printf("%d khong phai la so nguyen to\n", n2);
    }

	return 0;
}



