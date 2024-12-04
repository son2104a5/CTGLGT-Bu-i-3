#include <stdio.h>
#include <string.h>

void reverseString(char str[], int lengthOfStr, int count);

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    gets(str);
    int lengthOfStr = strlen(str);
    printf("Chuoi dao nguoc: ");
    reverseString(str, lengthOfStr, 0);
    printf("\n");
    return 0;
}

void reverseString(char str[], int lengthOfStr, int count) {
    if (count >= lengthOfStr) {
        return;
    }
    printf("%c", str[lengthOfStr - count - 1]);
    reverseString(str, lengthOfStr, count + 1);
}

