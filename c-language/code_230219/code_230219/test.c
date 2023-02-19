#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int my_strlen(char* str){
	int n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return n;
}
void reverse_string(char* str) {
	char tmp = *str;
	int len = my_strlen(str);
	*str = *(str + len -1);
	*(str + len -1) = '\0';
	if (my_strlen(str + 1) >= 2) {
		reverse_string(str + 1);
	}
	*(str + len -1) = tmp;
}
int main() {
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}