#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
#define N 300
 
void fanzhuan(char *begain, char *end) {//ԭ�� ����1,2,3  1��3������ �ͱ�ɣ�3,2,1
     //��ת����
	char temp;
	while(begain<end){
	
		temp = *begain;
		*begain = *end;
		*end = temp;
 
		begain++;
		end--;
	}
}
 
 
int main() {
 
	char c[N];//����ַ����Ŀռ�
 
	char* pstemp, * ptemp;
 
	while (gets(c) !=NULL) {
 
		fanzhuan(c, c+strlen(c) - 1);
		
 
		pstemp = c;
 
		while (*pstemp) {
 
			while (*pstemp==' ') {//��һ�������������ʱ ����һ���ո� �������ո��ʱ���ж�һ������������� 
 
				pstemp++;
			}
			ptemp = pstemp;
			while (*pstemp !=' ' && *pstemp)//�˴��ǵ��ʵ�β���ж�
			{
				pstemp++;
			}
 
			fanzhuan(pstemp, pstemp - 1);
		}
 
		puts(c);
	}
}
 
