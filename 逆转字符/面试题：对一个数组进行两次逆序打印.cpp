//�����⣺��һ������������������ӡ
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
	//��������
	gets(arr);
	//��������Ĵ�С
	int len = strlen(arr);
	char* left = arr;
	char* right = left + len - 1;
	reverse_string(left, right);
	//�Ե��ʽ�������
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
			cur++;//cuiԭ���ǿո�
		}
	}
	printf("%s\n", arr);
	return 0;
}

