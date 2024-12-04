#include <stdio.h>

int sumArr(int n, int i, int arr[]);

int main(){
	int n;
	int arr[n];
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if(n < 0){
		printf("so n khong hop le");
		return 0;
	}
	printf("nhap cac phan tu trong mang:\n");
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("%d", sumArr(n, 0, arr));
	return 0;
}

int sumArr(int n, int i, int arr[]){
	if(i > n - 1){
		return 0;
	}
	return arr[i] + sumArr(n, i + 1, arr);
}
