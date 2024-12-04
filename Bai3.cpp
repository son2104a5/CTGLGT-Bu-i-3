#include <stdio.h>

int fibornaci(int n, int i, int f0, int f1);

int main(){
	int n;
	int i = 0;
	int f0 = 0;
	int f1 = 1;
	printf("nhap so n duong: ");
	scanf("%d", &n);
	if(n < 2){
		printf("So n khong khop voi dieu kien de bai");
		return 0;
	}
	fibornaci(n, i, f0, f1);
	return 0;
}

int fibornaci(int n, int i, int f0, int f1){
	i++;
	if(i > n){
		return 0;
 	}
 	printf("%d ", f0);
	return f0 + fibornaci(n, i, f1, f0 + f1);
}
