#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
#define N 300
 
void fanzhuan(char *begain, char *end) {//原理： 例：1,2,3  1和3交换后 就变成：3,2,1
     //反转函数
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
 
	char c[N];//存放字符串的空间
 
	char* pstemp, * ptemp;
 
	while (gets(c) !=NULL) {
 
		fanzhuan(c, c+strlen(c) - 1);
		
 
		pstemp = c;
 
		while (*pstemp) {
 
			while (*pstemp==' ') {//当一个单词输入结束时 会有一个空格 ，读到空格的时候，判定一个单词输入结束 
 
				pstemp++;
			}
			ptemp = pstemp;
			while (*pstemp !=' ' && *pstemp)//此处是单词的尾部判定
			{
				pstemp++;
			}
 
			fanzhuan(pstemp, pstemp - 1);
		}
 
		puts(c);
	}
}
 
