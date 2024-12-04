#include <stdio.h>

int factorial(int n);

int main(){
	int n;
	printf("nhap so nguyen duong n: ");
	scanf("%d", &n);
	printf("Giai thua cua %d la: %d", n, factorial(n));
	return 0;
}

int factorial(int n){
	if(n == 0){
		return 1;	
	}
	return n * factorial(n-1);
}

