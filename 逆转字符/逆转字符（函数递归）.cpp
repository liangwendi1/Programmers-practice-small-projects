#include <stdio.h>
#include <string.h>

void reverse(char* str, int n) {
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // 使用fgets替换gets
    str[strlen(str) - 1] = '\0'; // 去掉末尾的换行符
    reverse(str, strlen(str) - 1);
    printf("Reversed String: %s", str);
    return 0;
}
