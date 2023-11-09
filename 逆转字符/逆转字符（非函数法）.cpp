//第一种方法（非函数）
//对一个字符串进行逆序
//对一个字符串进行逆序
#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000];
    fgets(arr, sizeof(arr), stdin);

    size_t len = strlen(arr);
    if (len > 0 && arr[len-1] == '\n') {
        arr[--len] = '\0';
    }

    for (size_t i = 0, j = len - 1; i < j; ++i, --j) {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("%s\n", arr);
    return 0;
}
