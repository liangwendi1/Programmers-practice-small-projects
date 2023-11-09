//面试题：对一个数组进行两次逆序打印
#include <stdio.h>
#include <string.h>
void reverse_string(char* l, char* r)
{
	while (l < r)
	{
		char tmp = *l;
		*l = *r;
		*r = tmp;
		l++;
		r--;
	}
}
int main()
{
	char arr[100] = { 0 };
	//输入数组
	gets(arr);
	//计算数组的大小
	int len = strlen(arr);
	char* left = arr;
	char* right = left + len - 1;
	reverse_string(left, right);
	//对单词进行逆序
	char* start = arr;
	char* cur = arr;
	while (*cur!='\0')
	{
		while (*cur != ' ' && *cur!='\0')
		{
			cur++;
		}
		reverse_string(start, cur - 1);
		start = cur + 1;
		if (*cur != '\0')
		{
			cur++;//cui原来是空格
		}
	}
	printf("%s\n", arr);
	return 0;
}

