#define _CRT_SECURE_NO_WARNINGS 1
//int main() {
//	int a = 5;
//	//ԭ���� 0000 0000 0000 0000 0000 0000 0000 0101
//	//    0x00000005
//	int b = -9;
//	//ԭ 10000000000000000000000000001001
//	//�� 11111111111111111111111111110110
//	//�� 1111 1111 1111 1111 1111 1111 1111 0111
//	// 0xfffffff7
//	return 0;
//}
//#include<stdio.h>
//int check() {
//	int a = 1;
//	return((char*)&a);
//}
//int main() {
//	if (check) {
//		printf("С��");
//	}
//	else {
//		printf("���");
//	}
//	return 0;
//}
//���ʲô��
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	unsigned int a = -10;
//	//10000000000000000000000000001010
//	//11111111111111111111111111110101
//	//11111111111111111111111111110110
//	//����ת��Ϊ10���� 4294967286
//	printf("%d\n", a);
//	printf("%u\n", a);
//	//ʵ�������ǿ��Է��֣�������տ�ʼ�������unsigned int�Ҹ������Ǹ���
//	//�����ڴ���������δ�Ķ�����һ�������Ʋ���
//	//��ô���ں������ӡΪ���;Ͱ����͵ķ�ʽȥת������ӡ
//	//��ӡΪ�޷������;Ͱ��޷������͵ķ�ʽȥת������ӡ
//	//Ҳ����˵���������ͣ�����ʵ���ϴ洢���ڴ��еĶ��������ж���һ����
//	//�ص����������ȥ����������ݣ����÷�ʽ��ͬ����Ͳ�ͬ
//}
#include<stdio.h>
//int main()
//{
//	//unsigned char a = 200;
//	//unsigned char b = 100;
//	//unsigned char c = 0;
//	//c = a + b;//44
//	//printf("%d %d" , a + b, c);
//
//	//return 0;
//	unsigned int a = 0x1234; 
//	unsigned char b = *(unsigned char*)&a;
//}
//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}
int main() {
	for (int i = 0; i < 4; i++) {
		for (int j = i; j > 0; j--) {
			
		}
	}
	return 0;
}