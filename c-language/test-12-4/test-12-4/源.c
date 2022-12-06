#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d", compare(a, b));
}
int compare(int x,int y)
{
	int max = 0;
	if (x > y)
	{
		max = x;
	}
	else
	{
		max = y;
	}
	return max;
}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while ((scanf("%d %d", &a, &b)) != EOF) {
//        if (a > b)
//        {
//            printf("%d>%d\n", a, b);
//        }
//        else if (a == b)
//        {
//            printf("%d=%d\n", a, b);
//        }
//        else
//        {
//            printf("%d<%d\n", a, b);
//        }
//    }
//    return 0;
//}