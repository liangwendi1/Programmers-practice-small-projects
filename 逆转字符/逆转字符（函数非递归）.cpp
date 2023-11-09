//第二种方法（函数非递归）
#include <stdio.h>
#include <string.h>

void reverse_string(char* str)
{
    if (str == NULL || *str == '\0')
        return;

    char* start = str;
    char* end = str + strlen(str) - 1;

    while (start < end)
    {
        char tmp = *start;
        *start = *end;
        *end = tmp;

        start++;
        end--;
    }
}

int main()
{
    char arr[] = "abcdef";

    reverse_string(arr);

    printf("%s\n", arr);

    return 0;
}
