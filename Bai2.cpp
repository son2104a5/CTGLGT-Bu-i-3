#include <stdio.h>

int compositeNumber(int n, int m);

int main(){
	int n, m;
	printf("nhap so n va m lan luot: ");
	scanf("%d %d", &n, &m);
	printf("Tong cua day so tu %d den %d la: %d", n, m, compositeNumber(n, m));
	return 0;
}

int compositeNumber(int n, int m){
	if(n > m){
		return 0;
	}
	return n + compositeNumber(n+1, m);
}
