#include <stdio.h>
#include <string.h>

void symmetryChain(char str[], int length, int count);

int main(){
	char str[100];
	printf("nhap chuoi: ");
	gets(str);
	int length;
	length = strlen(str);
	symmetryChain(str, length, 0);
	return 0;
}

void symmetryChain(char str[], int length, int count){
	if(count >= length/2){
		printf("Palindrome valid");
		return;
	}
	if(str[count] != str[length - count -1]){
		printf("Palindrome invalid");
		return;
	}
	symmetryChain(str, length, count + 1);
}
